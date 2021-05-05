#include <iostream>
#include "math.h"
using namespace std;
void translation_to_polar_coordinates_1(double* pointer_to_value_x, double* pointer_to_value_y);
void translation_to_polar_coordinates_2(double& reference_to_value_x, double& reference_to_value_y);
int main()
{
    double entry_x, entry_y;
    setlocale(LC_ALL, "Russian");
    cout << "Перевод из декартовой системы координат в полярную" << endl;
    cout << "Введите координату x: ";
    cin >> entry_x;
    cout << "Введите координату y: ";
    cin >> entry_y;
    double* pointer_to_entry_x = &entry_x;
    double* pointer_to_entry_y = &entry_y;
    cout << "Работа функции, которая работает при передаче параметров по указателю: " << endl;
    translation_to_polar_coordinates_1(pointer_to_entry_x, pointer_to_entry_y);
    cout << "Работа функции, которая работает при передаче параметров по ссылке: " << endl;
    double& reference_to_entry_x = entry_x;
    double& reference_to_entry_y = entry_y;
    translation_to_polar_coordinates_2(reference_to_entry_x, reference_to_entry_y);
    return 0;
}
void translation_to_polar_coordinates_1(double* pointer_to_value_x, double* pointer_to_value_y)
{
    cout << atan(((abs((*pointer_to_value_y))) / (abs((*pointer_to_value_x))))) << " рад" << endl;
}
void translation_to_polar_coordinates_2(double& reference_to_value_x, double& reference_to_value_y)
{
    cout << atan((abs(reference_to_value_y)) / (abs(reference_to_value_x))) << " рад" << endl;
}