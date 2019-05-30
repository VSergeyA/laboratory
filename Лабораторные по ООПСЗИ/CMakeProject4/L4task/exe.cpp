#include <iostream>
#include <math.h>
#include <conio.h>
#include <com.h>
using namespace std;
void main()

{

	int re, im;

	cout << "real = ";

	cin >> re;

	cout << "imagine = ";

	cin >> im;

	Complex z(re, im);

	cout << "z = " << z;

	cout << "\nf(z) = i+z*sh(1+z)\nf(z) = (" << Complex(0, 1) << ") + (" << z * sinh(Complex(1, 0) + z) << ") = " << Complex(0, 1) + z * sinh(Complex(1, 0) + z);

	_getch();

}