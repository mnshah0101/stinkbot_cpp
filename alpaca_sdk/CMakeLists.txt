# Minimum version of CMake
cmake_minimum_required(VERSION 3.16)

# Project name
project(AlpacaSDK)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)



# Create a library for alpaca_sdk
add_library(alpaca_sdk
    AlpacaClient.cpp
    accounts/account.cpp
    brokers/broker.cpp
    data/market_data.cpp
    trades/trade.cpp
)



# Include directories
target_include_directories(alpaca_sdk
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/accounts
        ${CMAKE_CURRENT_SOURCE_DIR}/brokers
        ${CMAKE_CURRENT_SOURCE_DIR}/data
        ${CMAKE_CURRENT_SOURCE_DIR}/trades
)



