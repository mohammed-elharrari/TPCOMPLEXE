#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double rea, double imag)
	:re(rea),img(imag)
{
}

Complex::Complex(Complex& c)
{
	this->re = c.re;
	this->img = c.img;
}

void Complex::afficher()
{
	cout << this->re << "+i" << this->img << endl;
}

Complex Complex::operator-(Complex& c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;
	return *res;
}

Complex Complex::operator-(double& b) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - b;
	res->img = this->img  ;
	return *res;
}

Complex Complex::operator+(Complex& c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + c.re;
	res->img = this->img + c.img;
	return *res;
}

Complex Complex::operator+(double& b) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - b;
	res->img = this->img ;
	return *res;
}

Complex Complex::operator*(Complex& c) const
{
	Complex* res1 = new Complex(0.0, 0.0);
	Complex* res2 = new Complex(0.0, 0.0);
	Complex* res = new Complex(0.0, 0.0);
	res1->re = (this->re * c.re);
	res1->img = (this->re * c.img);
	res2->re = -(this->img * c.img);
	res2->img= this->img * c.re;
	res->re = res1->re + res2->re;
	res->img = res1->img + res2->img;
		return *res;
	
}

Complex Complex::operator*(double& b) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * b;
	res->img = this->img * b;
	return *res;
}



Complex Complex::operator/(Complex& c) const
{
	double d = (c.re * c.re) + (c.img * c.img);
	Complex* res = new Complex(0.0, 0.0);
	res->re = ((this->re * c.re) + (this->img * c.img)) / d;
	res->img = ((this->img * c.re) - (this->re * c.img)) / d;
	
	return *res;
}

Complex Complex::operator/(double& b) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re / b;
	res->img = this->img / b;
	return *res;
}

bool Complex::operator==(const Complex& c) const
{
	return (this->re == c.re && this->img == c.img);
}

bool Complex::operator!=(const Complex& c) const
{
	return (this->re != c.re || this->img != c.img);
}

bool Complex::operator>(const Complex& c) const
{
	return  (this->re * this->re + this->img * this->img) >(c.re * c.re + c.img * c.img);
}

bool Complex::operator>(const double& c) const
{
	return  (this->re * this->re + this->img * this->img) > (c * c);
}


bool Complex::operator<(const Complex& c) const
{
	return  (this->re * this->re + this->img * this->img) < (c.re * c.re + c.img * c.img);
}

bool Complex::operator<(const double& c) const
{
	return  (this->re * this->re + this->img * this->img) < (c * c);
}

Complex::~Complex()
{
}
