#include <iostream>
#include "math.h"
const double PI = 3.141592653589793;
using namespace std;
double finding_the_area_of_correct_figures(double R, double n);
int main()
{
	return 0;
}
double finding_the_area_of_correct_figures(double R, double n) {
	double a;
	double r;
	double P;
	double S;
	a = 2 * R * sin((180 / n) * (PI/180));
	r = R * cos((180 / n) * (PI / 180));
	P = a * n;
	S = 0.5 * P * r;
	return S;
}