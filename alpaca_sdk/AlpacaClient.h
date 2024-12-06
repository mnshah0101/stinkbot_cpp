#ifndef ALPACA_CLIENT_H
#define ALPACA_CLIENT_H

#include <string>
#include <unordered_map>
#include <stdexcept>
#include "accounts/account.h"
#include "brokers/broker.h"
#include "data/market_data.h"
#include "trades/trade.h"

class AlpacaClient
{
public:
    AlpacaClient();

    // Methods to interact with each module
    void fetchAccountInfo();
    void placeTrade(const std::string &symbol, int quantity);
    void fetchMarketData(const std::string &symbol);
    void getBrokerInfo();

private:
    std::unordered_map<std::string, std::string> envVars;

    void loadEnvironmentVariables();

    // Instances of module classes
    Account account;
    Broker broker;
    MarketData marketData;
    Trade trade;
};

#endif // ALPACA_CLIENT_H
