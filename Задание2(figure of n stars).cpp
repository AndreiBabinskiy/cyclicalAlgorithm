#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");

	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "¬ведите x : " << endl;
	cin >> x;

	cout << "¬ведите a : " << endl;
	cin >> a;

	cout << "¬ведите b : " << endl;
	cin >> b;

	cout << "¬ведите c : " << endl;
	cin >> c;

	while (x >= -1 && x <= 1.05) {

		if (x < 0 && b != 0) {
			F = a * pow(x, 2) + b;
			cout << "F = " << F << endl;
		}

		else if (x > 0 && b == 0) {
			F = (x - a) / (x - c);
			cout << "F = " << F << endl;
		}

		else {
			F = x / c;
			cout << "F = " << F << endl;
		}
		if (x == 0 || c == 0) {
		cout << "ƒеление на ноль невозможно" << endl;
		}

		cout << "- - - - - - - -" << endl;
		cout << "|  x  |   F  |" << endl;
		cout << "- - - - - - - -" << endl;
		cout << "|" << x << " | " << F << "|" << endl;
		cout << "- - - - - - - -" << endl;

		x = x + 0.05;
	}
}