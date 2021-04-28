#include <iostream>
using namespace std;
int finding_the_perfect_number(int number);
int main()
{
    for (int i = 2; i <= 1000; i++) {
        cout << finding_the_perfect_number(i) << endl;
    }
    return 0;
}
int finding_the_perfect_number(int number) {
    int s = 0;
    for (int j = 1; j < number; j++) {
        if (number % j == 0) {
            s += j;
        }
    }
    if (s == number) {
        return number;
    }
}