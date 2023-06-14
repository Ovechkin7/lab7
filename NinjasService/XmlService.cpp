#include "XmlService.h"
#include<exception>
#include<fstream>
#include<string>
#include<iostream>
#include"pugixml.hpp"
using namespace pugi;
using namespace std;
Ninja XmlService::getWeather(std::string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw exception("error");
    xml_node node = doc.child("Shinobies").child("Villages").child("Village").child("Clans").child("Clan").child("Ranks").child("Rank").child("Ninjas");
    std::string name = node.child("name").
        attribute("name").
        as_string(); //  Киров
    std::string nature = node.child("nature").
        attribute("nature").
        as_string(); //  Киров
    int CountOfMis = node.child("CountOfMis").
        attribute("CountOfMis").
        as_int(); //  Киров
    std::string SpecialAbility = node.child("SpecialAbility").
        attribute("SpecialAbility").
        as_string(); //  Киров
    std::string Village = node.child("Village").
        attribute("Village").
        as_string(); //  Киров
    return Ninja(name, nature,CountOfMis,SpecialAbility,Village);
}
