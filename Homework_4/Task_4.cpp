#include <iostream>
#include <math.h>
using namespace std;
int f(const int *a, const int n);
int main()
{
    const int n = 5;
    int a[n] = {2, 4, -8, -10, 3};
    cout << f(a, n);
    return 0;
}
int f(const int *a, const int n){
    int imax = 0, imin = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > a[imax]){
            imax = i;
        }
        if(a[i] < a[imin]){
            imin = i;
        }
    }
    return abs(a[imax] - a[imin]);
}