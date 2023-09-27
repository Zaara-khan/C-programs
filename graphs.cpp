

 
  int defgenerate_stock_price():
 int random.uniform(50, 150)

Function to update the live graph
def update_graph(x, y, upper_bound, lower_bound):
    plt.clf()
    plt.plot(x, y, label='Stock Ratio')
    plt.axhline(upper_bound, color='r', linestyle='--', label='Upper Bound')
    plt.axhline(lower_bound, color='g', linestyle='--', label='Lower Bound')
    plt.xlabel('Time')
    plt.ylabel('Stock Ratio')
    plt.title('Live Perspective Graph')
    plt.legend()
    plt.pause(1)   Pause to update the graph (adjust as needed)

Main function()
def main():
    x = []
    y = []
    upper_bound = 1.2   Set your upper bound
    lower_bound = 0.8  Set your lower bound

    plt.ion()   Turn on interactive mode for live graph

    while True:
        stock_price_1 = generate_stock_price()
        stock_price_2 = generate_stock_price()

        Calculate the stock ratio
        stock_ratio = stock_price_1 / stock_price_2

        Append data to the lists
        x.append(len(x) + 1)
        y.append(stock_ratio)

        Check if bounds are crossed
        if stock_ratio > upper_bound or stock_ratio < lower_bound:
            print(f'Alert: Stock Ratio Crossed Bounds ({stock_ratio})')

        Update the live graph
        update_graph(x, y, upper_bound, lower_bound)

        time.sleep(1)  Delay for data update (adjust as needed)

if __name__ == "__main__":
    main()

