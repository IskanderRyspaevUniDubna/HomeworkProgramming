#include <iostream>
using namespace std;
int f(const int *a, const int n);
int main()
{
    const int n = 10;
    int a[n] = {-2, -1, -8, 2, 4, 6, 15, 17, 19, 20};
    cout << f(a, n);
    return 0;
}
int f(const int *a, const int n){
    int imax = 0, imin = 0, div_two = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > a[imax]){
            imax = i;
        }
        if(a[i] < a[imin]){
            imin = i;
        }
    }
    int ibeg = imax < imin ? imax : imin;
    int iend = imax < imin ? imin : imax;
    for(int i = ibeg + 1; i < iend; i++){
        if((a[i] % 2) == 0){
            div_two += 1;
        }
    }
    return div_two;
}