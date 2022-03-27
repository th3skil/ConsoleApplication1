#include "kolo.h"
#include "kolo.h"

kolo::kolo() {
	x = 0;
	y = 0;
	r = 1;
}
kolo::kolo(float a, float b, float c) {
	x = a;
	y = b;
	if (c <= 0) {
		cout << "Podany promien jest mniejszy od 0, ustawiam na 1" << endl;
		r = 1;
	}
	else
		r = c;
}

bool spr(kolo kolko, Punkt p1) {
	float odl = sqrt(pow((kolko.x - p1.x), 2) + pow((kolko.y - p1.y), 2));
	if (odl > kolko.r)
		return false;
	return true;
}
