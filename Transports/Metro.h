#pragma once
#include "Transport.h"

class Metro : public Transport
{
protected:
	int wagons;
	bool conditioner;
	bool light;
	char* sits;
};

