﻿#pragma once
#include <map>
#include "Formatter.h"

class DateFormatter
{
	std::map<std::string, Formatter*> map;
	Formatter* year();

public:

	DateFormatter();
	~DateFormatter();
	std::map<std::string, Formatter*>& get();
	
};
