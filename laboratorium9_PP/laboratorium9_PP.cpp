// laboratorium9_PP.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Zadanie 1
/* #include <iostream>
using namespace std;
struct Punkt {
	int x, y;
};

int main() {
	Punkt p;
	p.x = 10;
	p.y = 20;
	cout << "Wspolrzedne punktu to: (" << p.x << ", " << p.y << ")" << endl;
}
*/

// Zadanie 2
/* #include <iostream>
using namespace std;
int pole();
struct prostokat {
	int a, b;
};

int pole(int a, int b) {
	return a * b;
}

int main() {
	prostokat p;
	p.a = 10;
	p.b = 20;
	cout << " Pole prostokata to: " << pole(p.a, p.b) << endl;
}
*/

// Zadanie 3
#include <iostream>
using namespace std;
struct t {
	int a, b, c;
};
void przepisz(t trojkat_1, t* trojkat_2);

void przepisz(t trojkat_1, t* trojkat_2) {
	t* trojkat_2 = &trojkat_1;
}

int main() {
	t trojkat_1 = { 2, 6, 595 };
	t trojkat_2;
	przepisz(trojkat_1, &trojkat_2);

	cout << "Boki trojkata 2 to: " << trojkat_2.a << ", " << trojkat_2.b << ", " << trojkat_2.c << endl;
}