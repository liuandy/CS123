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
	numPolynomials++;
}

// Member functions

bool Polynomial::hasRealSolution() const {
	return true;
}

double Polynomial::getRealSolution1() const {
	return 0.0;
}
double Polynomial::getRealSolution2() const {
	return 0.0;
}

int Polynomial::evaluate(int x) const {
	return 0;
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
