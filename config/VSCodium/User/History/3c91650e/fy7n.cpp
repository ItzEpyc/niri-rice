#include <iostream>
using namespace std;


int main() {

  int a, b;

  cout << "Введите первое число: ";
  cin >> a;
  cout << "Введите второе число: ";
  cin >> b;

  int sum = a + b;
  int diff = a - b;
  int div = a / b;
  int mult = a * b;

  cout << "Результат: " << sum << endl;
  cout << "Результат: " << diff << endl;
  cout << "Результат: " << div << endl;
  cout << "Результат: " << mult << endl;
  
  return 0;
}
