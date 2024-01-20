#pragma once
#include <string>

class TrustCheck
{
public:
    bool trustCheck(std::string clientVersion);
private:
    std::string _baseUrl;
};
