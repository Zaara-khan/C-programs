import pandas as pd
df = pd.read_csv("stock_prices.csv")

# Calculate some basic trading indicators
df['StockA_Return'] = df['StockA'].pct_change()  # Daily returns for Stock A
df['StockB_Return'] = df['StockB'].pct_change()  # Daily returns for Stock B

# Example trading strategy: Buy Stock A when its daily return is positive
# and sell when its daily return is negative
df['StockA_Position'] = 0  # 0 represents no position
df.loc[df['StockA_Return'] > 0, 'StockA_Position'] = 1  # Buy signal
df.loc[df['StockA_Return'] < 0, 'StockA_Position'] = -1  # Sell signal

# Example trading strategy: Buy Stock B when its daily return is positive
# and sell when its daily return is negative
df['StockB_Position'] = 0
df.loc[df['StockB_Return'] > 0, 'StockB_Position'] = 1
df.loc[df['StockB_Return'] < 0, 'StockB_Position'] = -1

# You can define more complex trading strategies based on your analysis

# Display the DataFrame with trading signals
print(df)

