#include <iostream>
using namespace std;
void returning_powers_of_number_1(double *pointer_to_number);
void returning_powers_of_number_2(double &number_reference);
int main()
{
	setlocale(LC_ALL, "Russian");
	double entry_number;
	cout << "Введите номер: ";
	cin >> entry_number;
	double *pointer_to_entry_number = &entry_number;
	returning_powers_of_number_1(pointer_to_entry_number);
	double &reference_to_entry_number = entry_number;
	returning_powers_of_number_2(reference_to_entry_number);
	return 0;
}
void returning_powers_of_number_1(double *pointer_to_number)
{
	cout << "Работа функции, которая работает при передаче параметров по указателю: " << endl;
	cout << (*pointer_to_number) * (*pointer_to_number) << endl;
	cout << (*pointer_to_number) * (*pointer_to_number) * (*pointer_to_number) << endl;
	cout << (*pointer_to_number) * (*pointer_to_number) * (*pointer_to_number) * (*pointer_to_number) << endl;

}
void returning_powers_of_number_2(double &number_reference)
{
	cout << "Работа функции, которая работает при передаче параметров по ссылке: " << endl;
	cout << (number_reference) * (number_reference) << endl;
	cout << (number_reference) * (number_reference) * (number_reference) << endl;
	cout << (number_reference) * (number_reference) * (number_reference) * (number_reference) << endl;
}