#pragma once
#include"Service.h"
class XmlService :public Service
{
public:
	virtual Ninja getWeather(std::string s) override;
	virtual ~XmlService() {};
};


