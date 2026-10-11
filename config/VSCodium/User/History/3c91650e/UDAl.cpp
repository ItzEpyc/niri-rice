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

  cout << "Сложение: " << sum << endl;
  cout << "Вычитание: " << diff << endl;
  cout << "Деление: " << div << endl;
  cout << "Умножение: " << mult << endl;

  return 0;
}
