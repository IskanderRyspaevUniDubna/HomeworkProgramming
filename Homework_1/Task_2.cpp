#include <iostream>
#include "math.h"
using namespace std;
float distance_between_two_points(float x1, float y1, float x2, float y2);
int main()
{
    return 0;
}
float distance_between_two_points(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

