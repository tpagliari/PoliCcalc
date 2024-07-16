#include "calculator.h"
#include <math.h>

double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }

double divide(double a, double b) { return a / b; }

double power(double base, double exp) { return pow(base, exp); }

double square_root(double num) { return sqrt(num); }

double modulus(double a, double b) { return fmod(a, b); }
