#include <iostream>
using namespace std;
void f(int **a, const int n, int *b);
int main()
{
    int n; // количество строк и столбцов
    cin >> n; 
    int **a; // исходная матрица
    a = new int* [n];
    int *b = new int[n]; // одномерный массив
    for(int i = 0; i < n; i++){
        a[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = -9 + rand() % (9 + 9 + 1);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    f(a,n,b);
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    return 0;
}
void f(int **a, const int n, int *b){
    int s = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((a[j][i] % 2) == 0){
                b[s] = a[j][i];
                s += 1;
                break;
            }
        }
    }
}