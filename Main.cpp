#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;

	cout << "������� ������ �����: ";
	cin >> a;

	cout << "������� ������ �����: ";
	cin >> b;

	int result = SquaredSum(a, b);
	cout << "\n������� ����� ������ ���� ����� ����� " << SquaredSum(a, b) << endl;
}