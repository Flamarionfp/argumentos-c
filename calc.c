#include "calc.h"
#include <math.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double divide(double a, double b) {
    return a / b;
}

double multiply(double a, double b) {
    return a * b;
}

double remainder(double a, double b) {
    return fmod(a, b);
}

double power(double base, int exponent) {
    return pow(base, exponent);
}

double squareRoot(double a) {
    return sqrt(a);
}

double cubeRoot(double a) {
    return cbrt(a);
}
