#ifndef TRADE_H
#define TRADE_H

#include <string>
#include <iostream>

class Trade
{
public:
    // Constructor
    Trade();

    // Method to execute a trade
    void executeTrade(const std::string &apiKey, const std::string &apiSecret,
                      const std::string &symbol, int quantity);

    // Method to fetch trade details
    void fetchTradeDetails(const std::string &tradeId);

private:
    // Private method to simulate trade execution
    void simulateTrade(const std::string &symbol, int quantity);

    std::string lastTradeId;
    std::string lastTradeSymbol;
    int lastTradeQuantity;
};

#endif // TRADE_H
