#include "JsonService.h"
#include"XmlService.h"
#include"Ninja.h"
int main() {
	JsonService js;
	Ninja w = js.getWeather("ninjas.json");
	XmlService xs;
	Ninja q = xs.getWeather("ninjas.xml");



}