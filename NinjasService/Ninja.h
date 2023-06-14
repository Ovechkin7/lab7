#include<string>
#pragma once
/// <summary>
/// Клас описания параметров Ninja
/// </summary>
class Ninja 
	{
		std::string name;
		std::string nature;
		int countOfMis;
		std::string specialAbility;
		std::string village;
	public:
		Ninja(std::string name, std::string nature, int countOfMis, std::string specialAbility, std::string village);
	};

