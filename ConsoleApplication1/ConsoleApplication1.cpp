#include "kolo.h"

int main()
{
	float x{}, y{}, r{};
	cout << "Wprowadz dane dla kola: " << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	while (r <= 0)
	{
		cout << "r = ";
		cin >> r;
		if (r <= 0)
			cout << "Promien musi byc nieujemny " << endl;
	}
	kolo k1(x, y, r);
	float a{}, b{};
	cout << "Wprowadz dane punktu (x,y) " << endl;
	cout << "x = ";
	cin >> a;
	cout << "y = ";
	cin >> b;
	Punkt p1(a, b);
	if (spr(k1, p1))
		cout << "Punkt zawiera sie w kole" << endl;
	else
		cout << "Punkt nie zawiera sie w kole" << endl;
}

