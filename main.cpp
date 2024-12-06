#include <iostream>
#include "alpaca_sdk/AlpacaClient.h"

int main()
{
    try
    {
        // Initialize the Alpaca SDK Client
        AlpacaClient client;

        // Call methods from AlpacaClient to interact with various modules
        std::cout << "Fetching Account Information..." << std::endl;
        client.fetchAccountInfo();

        std::cout << "\nFetching Market Data for AAPL..." << std::endl;
        client.fetchMarketData("AAPL");

        std::cout << "\nPlacing a Trade for TSLA..." << std::endl;
        client.placeTrade("TSLA", 10);

        
        std::cout << "\nAll operations completed successfully!" << std::endl;
    }
    catch (const std::exception &e)
    {
        // Handle any errors during SDK usage
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
