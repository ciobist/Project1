#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;

	cout << "¬ведите первое число: ";
	cin >> a;

	cout << "¬ведите второе число: ";
	cin >> b;

	int result = SquaredSum(a, b);
	cout << "\n вадрат суммы данных двух чисел равен " << SquaredSum(a, b) << endl;
}