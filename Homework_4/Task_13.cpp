#include <iostream>
using namespace std;
void f(int **a, const int n, const int m, int *b);
int main()
{
    int n; // количество строк 
    int m; // количество столбцов
    cin >> n >> m; 
    /*<-----Инициализация двумерного массива----->*/
    int **a; 
    a = new int* [n];
    for(int i = 0; i < m; i++){
        a[i] = new int[m];
    }
    /*<------------------------------------------>*/
    /*<-----Заполнение двумерного массива----->*/
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = -9 + rand() % (9 + 9 + 1);
        }
    }
    /*<--------------------------------------->*/
    int *b = new int[n*m]; // Вектор 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    f(a,n,m,b);
    for(int i = 0; i < n*m; i++){
        cout << b[i] << " ";
    }
    return 0;
}
void f(int **a, const int n, const int m, int *b){
    int s = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[s] = a[i][j];
            s += 1;
        }
    }
}