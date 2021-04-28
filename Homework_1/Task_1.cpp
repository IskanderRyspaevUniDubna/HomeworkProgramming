#include <iostream>
using namespace std;
char comparison_of_numbers(int a, int b);
int main()
{
    return 0;
}
char comparison_of_numbers(int a, int b)
{
    if (a > b) return '>';
    if (a < b) return '<';
    if (a == b) return '=';
}