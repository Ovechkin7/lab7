#include "JsonService.h"
#include"json.hpp"
#include<exception>
#include<fstream>
using nlohmann::json;
using namespace std;
Ninja JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw exception("error");

    json j;
    j = json::parse(fin);
    std::string name = j["name"]; //  Киров
    std::string nature = j["nature"]; // 49.6601
    int countOfMis= j["countofMis"]; // 58.5966  
    std::string specialAbility = j["specialAbility"]; // 5.69
    std::string village = j["village"]; // дождь

    return Ninja(name,nature,countOfMis,specialAbility,village);

}
