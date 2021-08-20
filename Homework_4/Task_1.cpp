#include <iostream>
#include <math.h>
using namespace std;

double f(int *a, int *b, int n);
int main()
{
    const int n = 3;
    int a_1[n] = {1, 1, 1};
    int b_1[n] = {2, 1, 0};
    cout << f(a_1, b_1, n);
    return 0;
}

double f(int *a, int *b, int n){
    double sum;
    double a_sum;
    double b_sum;
    for(int i = 0; i < n; i++){
        sum += a[i]*b[i];
    }
    for(int i = 0; i < n; i++){
        a_sum += a[i]*a[i];
    }
    for(int i = 0; i < n; i++){
        b_sum += b[i]*b[i];
    }
    return (long double) sum / (sqrt(a_sum) * sqrt(b_sum));
}