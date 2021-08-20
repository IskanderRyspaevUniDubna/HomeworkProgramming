#include <iostream>
#include <math.h>
using namespace std;

double f(int *a, int *b, const int n);
int main()
{
    const int n = 5;
    int a_1[n] = {1, 1, 1, 4, 3};
    int b_1[n] = {2, 1, 0, 6, 9};
    cout << f(a_1, b_1, n);
    return 0;
}

double f(int *a, int *b, const int n){
    double sum;
    for(int i = 0; i < n; i++){
        sum += a[i]*b[i];
    }
    return sum;
}