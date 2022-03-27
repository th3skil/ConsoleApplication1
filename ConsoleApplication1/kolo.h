#pragma once

#include "Punkt.h"
#include <iostream>
#include <cmath>

using namespace std;

class Punkt;
class kolo
{
private:
	float x{}, y{}, r{};
	friend class Punkt;
	friend bool spr(kolo kolko, Punkt p1);
public:
	kolo();
	kolo(float a, float b, float c);
};



