#ifndef MARKET_DATA_H
#define MARKET_DATA_H

#include <string>
#include <iostream>

class MarketData
{
public:
    void getMarketData(const std::string &apiKey, const std::string &apiSecret, const std::string &symbol);
};

#endif // MARKET_DATA_H
