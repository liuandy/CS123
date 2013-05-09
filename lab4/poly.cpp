#include <cmath>
#include "poly.h"

using namespace std;

// We must initialize static variables like this 
int Polynomial::numPolynomials = 0;

Polynomial::Polynomial() {
	a = b = c = 0;
	numPolynomials++;
}

Polynomial::Polynomial(int a, int b, int c) {
	this->a = a;
	this->b = b;
	this->c = c;
	numPolynomials++;
}
		
// ...

Polynomial::Polynomial(const Polynomial &p) {
	this->a = p.a;
	this->b = p.b;
	this->c = p.c;
	numPolynomials++;
}

// Destructor
Polynomial::~Polynomial() {
	numPolynomials += -1;
}

// Member functions

bool Polynomial::hasRealSolution() const {
	if ((this->b * this->b - 4 * this->a * this->c) >= 0) return true;
	return false;
}

double Polynomial::getRealSolution1() const {
	if (!hasRealSolution()) return -9999;
	double denominator = -(this->b) + sqrt(this->b * this->b - 4 * this->a * this->c);
	return (denominator / (2 * this->a));
}
double Polynomial::getRealSolution2() const {
	if (!hasRealSolution()) return -9999;
	double denominator = -(this->b) - sqrt(this->b * this->b - 4 * this->a * this->c);
	return (denominator / (2 * this->a));
}

int Polynomial::evaluate(int x) const {
	return (this->a * (x * x) + this->b * x + this->c);
}

// Overloaded operators

Polynomial& Polynomial::operator=(const Polynomial &p) {

    // Overloaded assignment
	this->a = p.a;
	this->b = p.b;
	this->c = p.c;

    return *this; 
}

Polynomial Polynomial::operator+(const Polynomial &p) const {
	return Polynomial(this->a + p.a, this->b + p.b, this->c + p.c);
}
bool Polynomial::operator==(const Polynomial &p) const {
	if (this->a != p.a) return false;
	else if (this->b != p.b) return false;
	else if (this->c != p.c) return false;
	return true;
}

// ...

int Polynomial::getNumPolynomials() {
    return numPolynomials;
}


// Global operators

// Printing the class
std::ostream& operator<<(std::ostream &out, const Polynomial &p) {
    return out << p.a << "*x^2 + " << p.b << "*x + " << p.c;
}
