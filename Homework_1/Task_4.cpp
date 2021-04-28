#include <iostream>
#include "math.h"
using namespace std;
double area_search(double a1, double a2, double a3, double a4, double d);
int main(){
    return 0;
}
double area_search(double a1, double a2, double a3, double a4, double d){
    double P1;
    double P2;
    double S1;
    double S2;
    P1 = 0.5 * (a1 + a2 +d);
    P2 = 0.5 * (a3 + a4 +d);
    S1 = sqrt(P1 * (P1 - a1) * (P1 -a2) * (P1 - d));
    S2 = sqrt(P2 * (P2 - a3) * (P2 -a4) * (P2 - d));
    return S1 + S2;
}
