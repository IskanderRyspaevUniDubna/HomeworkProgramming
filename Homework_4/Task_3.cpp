#include <iostream>
using namespace std;
void f(double *m, double *x, double *y, double *z, const int n);

int main()
{
    const int n = 2;
    double m[n] = {2, 1};
    double x[n] = {1, 1};
    double y[n] = {0, 2};
    double z[n] = {0, 1};
    f(m, x, y, z, n);
    return 0;
}

void f(double *m, double *x, double *y, double *z, const int n){
    double Xc, Yc, Zc;
    double x_sum, y_sum, z_sum, m_sum;
    m_sum = 0;
    for(int i = 0; i < n; i ++){
        m_sum += m[i];
    }
    for(int i = 0; i < n; i ++){
        x_sum += x[i] * m[i];
        y_sum += y[i] * m[i];
        z_sum += z[i] * m[i];
    }
    Xc = x_sum / m_sum;
    Yc = y_sum / m_sum;
    Zc = z_sum / m_sum;
    cout << Xc << " " << Yc << " " << Zc << endl;
}