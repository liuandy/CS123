#include <cmath>
#include "poly.h"

using namespace std;

// We must initialize static variables like this 
int Polynomial::numPolynomials = 0;

Polynomial::Polynomial() {
	a = b = c = 0;
}

Polynomial::Polynomial(int a, int b, int c) {
	this->a = a;
	this->b = b;
	this->c = c;
}
		
// ...

Polynomial::Polynomial(const Polynomial &p) {

}

// Destructor
Polynomial::~Polynomial() {

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

    // ...

    return *this; 
}

Polynomial Polynomial::operator+(const Polynomial &p) const {
	return Polynomial();
}
bool Polynomial::operator==(const Polynomial &p) const {
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
