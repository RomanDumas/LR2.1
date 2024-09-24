#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double z1, z2, x, y;


	cout << "x = "; cin >> x;	//дає змогу в консолі задати значення змінній
	cout << "y = "; cin >> y;

	z1 = cos(x) * cos(x) * cos(x) * cos(x) + sin(y) * sin(y) + (1 / 4.0) * sin(2 * x) * sin(2 * x) - 1;
	z2 = sin(y + x) * sin(y - x);
	//z3 = x * y / (x + y);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	//cout << "z3 = " << z3 << endl;

	cin.get();
	return 0;
}