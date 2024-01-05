#include "stdafx.h"
#include "SettingsLoader.h"
#include "RobloxServicesTools.h"
#include "HttpTools.h"


std::string SettingsLoader::GetSettingsString(std::string groupName)
{
	std::string url = GetSettingsUrl(_baseUrl, groupName.c_str(), "314B192B-D17A-4921-ABF9-C6F6264E5110");
	return HttpTools::httpGetString(url);
}
