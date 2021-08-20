#include <iostream>
using namespace std;
void f_1(int *a, int *b, int n, int k, int x);
int main(){
    int n;
    int k;
    int x;
    cout << "Введите n: "; cin >> n;
    int *a = new int[n];
    int *b = new int[n + 1];
    cout << "Введите элементы массива: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Введите k-ую позицию: ";
    cin >> k;
    cout << "Введите x: ";
    cin >> x;
    f_1(a, b, n, k, x);
    for(int i = 0; i < n + 1; i++){
        cout << b[i] << " ";
    }
    return 0;
}
void f_1(int *a, int *b, int n, int k, int x){
    for(int i = 0; i < k; i++){
        b[i] = a[i];
    }
    b[k] = x;
    for(int i = k + 1; i < n + 1; i++){
        b[i] = a[i - 1];
    }
}