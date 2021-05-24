#include <iostream>
#include "math.h"
using namespace std;
void finding_the_area_of_a_triangle_1(int* px1, int* py1, int* px2, int* py2, int* px3, int* py3);
void finding_the_area_of_a_triangle_2(int& rx1, int& ry1, int& rx2, int& ry2, int& rx3, int& ry3);
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Введите x1: ";
    cin >> x1;
    cout << "Введите y1: ";
    cin >> y1;
    cout << "Введите x2: ";
    cin >> x2;
    cout << "Введите y2: ";
    cin >> y2;
    cout << "Введите x3: ";
    cin >> x3;
    cout << "Введите y3: ";
    cin >> y3;
    int* po_to_x1 = &x1;
    int* po_to_y1 = &y1;
    int* po_to_x2 = &x2;
    int* po_to_y2 = &y2;
    int* po_to_x3 = &x3;
    int* po_to_y3 = &y3;
    finding_the_area_of_a_triangle_1(po_to_x1, po_to_y1, po_to_x2, po_to_y2, po_to_x3, po_to_y3);

    int& re_to_x1 = x1;
    int& re_to_y1 = y1;
    int& re_to_x2 = x2;
    int& re_to_y2 = y2;
    int& re_to_x3 = x3;
    int& re_to_y3 = y3;
    finding_the_area_of_a_triangle_2(re_to_x1, re_to_y1, re_to_x2, re_to_y2, re_to_x3, re_to_y3);
    return 0;
}
void finding_the_area_of_a_triangle_1(int* px1, int* py1, int* px2, int* py2, int* px3, int* py3)
{
    cout << "Передача параметров по указателю:" << endl;
    double a, b, c, P, S;
    a = sqrt(((*px2)-(*px1))*((*px2)-(*px1)) + ((*py2)-(*py1))*((*py2)-(*py1)));
    b = sqrt(((*px3)-(*px2))*((*px3)-(*px2)) + ((*py3)-(*py2))*((*py3)-(*py2)));
    c = sqrt(((*px3)-(*px1))*((*px3)-(*px1)) + ((*py3)-(*py1))*((*py3)-(*py1)));
    P = (a +b + c) / 2;
    S = sqrt(P*(P-a)*(P-b)*(P-c));
    cout << "Периметр данного треугольника: " << P * 2 << endl;
    cout << "Площадь данного треугольника: " << S << endl;
}
void finding_the_area_of_a_triangle_2(int& rx1, int& ry1, int& rx2, int& ry2, int& rx3, int& ry3)
{
    cout << "Передача параметров по ссылке:" << endl;
    double a, b, c, P, S;
    a = sqrt(((rx2)-(rx1))*((rx2)-(rx1)) + ((ry2)-(ry1))*((ry2)-(ry1)));
    b = sqrt(((rx3)-(rx2))*((rx3)-(rx2)) + ((ry3)-(ry2))*((ry3)-(ry2)));
    c = sqrt(((rx3)-(rx1))*((rx3)-(rx1)) + ((ry3)-(ry1))*((ry3)-(ry1)));
    P = (a + b + c) / 2;
    S = sqrt(P*(P-a)*(P-b)*(P-c));
    cout << "Периметр данного треугольника: " << P * 2 << endl;
    cout << "Площадь данного треугольника: " <<S << endl;
}