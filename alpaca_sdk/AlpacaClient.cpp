#include "AlpacaClient.h"
#include <iostream>
#include <cstdlib>

// Constructor
AlpacaClient::AlpacaClient()
{
    loadEnvironmentVariables();
}

// Load environment variables
void AlpacaClient::loadEnvironmentVariables()
{
    const char *apiKey = std::getenv("ALPACA_API_KEY");
    const char *apiSecret = std::getenv("ALPACA_SECRET_KEY");

    

    if (!apiKey || !apiSecret)
    {
        throw std::runtime_error("Environment variables not set properly");
    }

    envVars["APCA_API_KEY_ID"] = apiKey;
    envVars["APCA_API_SECRET_KEY"] = apiSecret;
}

// Fetch account information
void AlpacaClient::fetchAccountInfo()
{
    account.getAccountInfo(envVars["APCA_API_KEY_ID"], envVars["APCA_API_SECRET_KEY"]);
}

// Place a trade
void AlpacaClient::placeTrade(const std::string &symbol, int quantity)
{
    trade.executeTrade(envVars["APCA_API_KEY_ID"], envVars["APCA_API_SECRET_KEY"], symbol, quantity);
}

// Fetch market data
void AlpacaClient::fetchMarketData(const std::string &symbol)
{
    marketData.getMarketData(envVars["APCA_API_KEY_ID"], envVars["APCA_API_SECRET_KEY"], symbol);
}

