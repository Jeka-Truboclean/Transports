#pragma once
#include "Transport.h"

class Train : public Transport
{
protected:
	int wagons;
	char* type;
	char* cabin_type;
	bool food;
};

