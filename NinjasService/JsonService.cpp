#include "JsonService.h"
#include"json.hpp"
#include<exception>
#include<fstream>
#include<string>
#include<iostream>
using nlohmann::json;
using namespace std;
Ninja JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw exception("error");
    else {
        json j;
        fin >> j;
        //j = json::parse(fin);
        json j1 = j["ninjas"];
        std::string name = j["ninjas"][0]["name"]; //  Киров
        std::string nature = j["ninjas"][0]["nature"]; // 49.6601
        int countOfMis = j["ninjas"][0]["countOfMis"]; // 58.5966  
        std::string specialAbility = j["ninjas"][0]["specialAbility"]; // 5.69
        std::string village = j["ninjas"][0]["village"]; // дождь

        return Ninja(name, nature, countOfMis, specialAbility, village);
    }

}
