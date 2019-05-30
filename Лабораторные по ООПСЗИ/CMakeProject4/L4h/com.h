#include <iostream>
#include <complex>
class Complex
{
private:
	double re;
	double im;
public:

	Complex();
	Complex(double);
	Complex(double, double);

	double Re() const;
	double Im() const;
	double R() const;
	double Phi() const;

	Complex operator+(Complex& expr);
	Complex operator-(Complex& expr);
	Complex operator*(Complex& expr);
	Complex operator/(Complex& expr);

	friend Complex sinh(const Complex& z);
	friend std::ostream& operator<<(std::ostream& out, const Complex& ex);

};