#include<string>
#include"Ninja.h"
#pragma once
/// <summary>
/// Интрефейс получения Ninja
/// </summary>
class Service
{
public:
	virtual Ninja getWeather(std::string s) = 0;
	virtual ~Service() {};
};

