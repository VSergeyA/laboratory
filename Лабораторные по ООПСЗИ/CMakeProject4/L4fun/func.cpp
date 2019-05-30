#include <iostream>
#include <math.h>
#include "../L4h/com.h"
#include <complex>

using namespace std;



Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double _re)
{
	re = _re;
	im = 0;
}

Complex::Complex(double _re, double _im)
{
	re = _re;
	im = _im;
}

double Complex::Re() const
{
	return this->re;
}

double Complex::Im() const
{
	return this->im;
}

double Complex::R() const
{
	return sqrt(pow(re, 2) + pow(im, 2));
}

double Complex::Phi() const
{
	if (re > 0)
	{
		return atan(Im() / Re());
	}
	else if (re < 0 && im>0)
	{
		return 3.14159265 + atan(Im() / Re());
	}
	else if (re < 0 && im < 0)
	{
		return -3.14159265 + atan(Im() / Re());
	}
	return 1;
}


Complex Complex::operator+(Complex & ex)
{
	return Complex(re + ex.Re(), im + ex.Im());
}


Complex Complex::operator-(Complex & ex)
{
	return Complex(re - ex.Re(), im - ex.Im());
}


Complex Complex::operator*(Complex & ex)
{
	return Complex(re * ex.Re() - im * ex.Im(), re * ex.Im() + im * ex.Re());
}



Complex sinh(const Complex & z)

{
	return Complex(cos(z.Im()) * sinh(z.Re()), sin(z.Im()) * cosh(z.Re()));
}

ostream& operator << (ostream & out, const Complex & ex)

{
	if (ex.im >= 0)

	{
		out << ex.re << "+" << ex.im << "*i";
	}
	else
	{
		out << ex.re << ex.im << "*i";
	}
	return out;
}