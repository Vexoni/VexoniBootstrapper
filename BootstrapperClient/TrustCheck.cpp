#include "string"
#include "vector"
#include "stdafx.h"
#include "TrustCheck.h"

bool TrustCheck::trustCheck(std::string clientVersion)
{
    std::string allowedVersions[] = { "2017L", "2015E", "2021E", "2019M", "2013L" };
    // check if contains
    auto it = std::find(std::begin(allowedVersions), std::end(allowedVersions), clientVersion);
    return it != std::end(allowedVersions);
}