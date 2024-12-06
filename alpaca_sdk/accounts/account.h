#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>

class Account
{
public:
    void getAccountInfo(const std::string &apiKey, const std::string &apiSecret);
};

#endif // ACCOUNT_H
