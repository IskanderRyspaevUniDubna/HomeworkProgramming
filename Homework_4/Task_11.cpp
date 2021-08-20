#include <iostream>
using namespace std;
void f_2(int *a, int *b, int n, int k);
int main(){
    int n;
    int k;
    cout << "Введите n: "; cin >> n;
    int *a = new int[n];
    int *b = new int[n - 1];
    cout << "Введите элементы массива: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Введите k-ую позицию: ";
    cin >> k;
    f_2(a, b, n, k);
    for(int i = 0; i < n - 1; i++){
        cout << b[i] << " ";
    }
    return 0;
}
void f_2(int *a, int *b, int n, int k){
    for(int i = 0; i < k; i++){
        b[i] = a[i];
    }
    for(int i = k; i < n - 1; i++){
        b[i] = a[i+1];
    }
}