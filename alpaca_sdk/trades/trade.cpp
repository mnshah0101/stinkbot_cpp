#include "trade.h"

// Constructor
Trade::Trade() : lastTradeId(""), lastTradeSymbol(""), lastTradeQuantity(0) {}

// Public method to execute a trade
void Trade::executeTrade(const std::string &apiKey, const std::string &apiSecret,
                         const std::string &symbol, int quantity)
{
    // Simulate an API call using provided credentials
    std::cout << "Executing trade for " << symbol << " with quantity " << quantity << std::endl;
    std::cout << "Using API Key: " << apiKey << std::endl;

    // Simulate trade execution
    simulateTrade(symbol, quantity);
}

// Public method to fetch trade details
void Trade::fetchTradeDetails(const std::string &tradeId)
{
    if (tradeId == lastTradeId)
    {
        std::cout << "Fetching details for Trade ID: " << tradeId << std::endl;
        std::cout << "Symbol: " << lastTradeSymbol << ", Quantity: " << lastTradeQuantity << std::endl;
    }
    else
    {
        std::cout << "No details available for Trade ID: " << tradeId << std::endl;
    }
}

// Private method to simulate trade execution
void Trade::simulateTrade(const std::string &symbol, int quantity)
{
    // Simulate generating a trade ID and storing trade details
    lastTradeId = "TRADE_" + symbol + "_001";
    lastTradeSymbol = symbol;
    lastTradeQuantity = quantity;

    std::cout << "Trade executed successfully!" << std::endl;
    std::cout << "Trade ID: " << lastTradeId << ", Symbol: " << lastTradeSymbol
              << ", Quantity: " << lastTradeQuantity << std::endl;
}
