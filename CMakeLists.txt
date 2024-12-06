# Minimum CMake version
cmake_minimum_required(VERSION 3.16)

# Project Name
project(AlpacaTradingApp)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(CURL REQUIRED)


# Add Alpaca SDK as a library
add_subdirectory(alpaca_sdk)

# Main executable in root
add_executable(trading_algo main.cpp)

# Link Alpaca SDK to the main executable
target_link_libraries(trading_algo PRIVATE alpaca_sdk)
target_link_libraries(alpaca_sdk PRIVATE CURL::libcurl)
target_link_libraries(trading_algo PRIVATE CURL::libcurl)