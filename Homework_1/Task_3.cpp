#include <iostream>
using namespace std;
bool is_perfect_number(int num);
int main() {
  for (int i = 1; i < 1000; ++i) {
    if (is_perfect_number(i)) {
      cout << i << endl;
    }
  }
}
bool is_perfect_number(int num) {
  int sum = 0;
  for(int j = 1; j < num; j++) {
    if(num % j == 0)
      sum += j;
  }
  if(sum == num)
    return true;
  return false;
}
