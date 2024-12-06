#include "broker.h"

// Constructor
Broker::Broker() : brokerName("Default Broker"), brokerContact("contact@broker.com") {}

// Public method to fetch broker details
void Broker::getBrokerDetails(const std::string &baseUrl)
{
    std::cout << "Fetching broker details from base URL: " << baseUrl << std::endl;
    fetchBrokerDetails(baseUrl);
    std::cout << "Broker Name: " << brokerName << std::endl;
    std::cout << "Broker Contact: " << brokerContact << std::endl;
}

// Private method to simulate fetching broker details
void Broker::fetchBrokerDetails(const std::string &baseUrl)
{
    // Simulate API call to fetch details (replace with real API call if needed)
    if (baseUrl == "https://paper-api.alpaca.markets")
    {
        brokerName = "Paper Trading Broker";
        brokerContact = "support@paper.alpaca.markets";
    }
    else if (baseUrl == "https://live-api.alpaca.markets")
    {
        brokerName = "Live Trading Broker";
        brokerContact = "support@live.alpaca.markets";
    }
    else
    {
        brokerName = "Unknown Broker";
        brokerContact = "unknown@broker.com";
    }
}
