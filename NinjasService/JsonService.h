#include"Service.h"
#pragma once
class JsonService :public Service
{
public:
	virtual Ninja getWeather(std::string s) override;
	virtual ~JsonService() {};

};

