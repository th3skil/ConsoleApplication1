#pragma once

#include "kolo.h"

class kolo;
class Punkt
{
private:
	float x{}, y{};
	friend class kolo;
	friend bool spr(kolo kolko, Punkt p1);
public:
	Punkt();
	Punkt(float a, float b);
};

