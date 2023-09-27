
<html>
<head>
    <title>Stock Data Graph</title>
    <script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
</head>
<body>
    <canvas id="stockChart" width="400" height="200"></canvas>
    <script>
        var ctx = document.getElementById('stockChart').getContext('2d');
        var stockChart = new Chart(ctx, {
            type: 'line',
            data: {
                labels: [],
                datasets: [{
                    label: 'Top Ask Price',
                    data: [],
                    borderColor: 'rgba(75, 192, 192, 1)',
                    fill: false
                }]
            },
            options: {
                scales: {
                    x: {
                        type: 'time',
                        time: {
                            unit: 'second',
                            displayFormats: {
                                second: 'h:mm:ss a'
                            }
                        }
                    },
                    y: {
                        beginAtZero: true
                    }
                }
            }
        });

        function updateGraph() {
            fetch('/get_stock_data')
                .then(response => {
                    if (!response.ok) {
                        throw new Error('Network response was not ok');
                    }
                    return response.json();
                })
                .then(data => {
                    // Remove duplicate data points based on timestamp
                    const uniqueData = Array.from(new Set(data.map(item => item.timestamp)))
                        .map(timestamp => data.find(item => item.timestamp === timestamp));
                    
                    stockChart.data.labels = uniqueData.map(item => new Date(item.timestamp * 1000));
                    stockChart.data.datasets[0].data = uniqueData.map(item => item.top_ask_price);
                    stockChart.update();
                })
                .catch(error => {
                    console.error('Error:', error);
                });
        }

        // Update the graph every 5 seconds
        setInterval(updateGraph, 5000);
    </script>
</body>
</html>

