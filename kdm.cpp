#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Выберите: " << endl;
	cout << "1 - Вычислить число размещений без повторений" << endl;
	cout << "2 - Вычислить число перестановок" << endl;
	cout << "3 - Вычислить число сочетаний" << endl;
	int q;
	cin >> q;

	if (q == 1)
	{
		double n; // n
		double x = 1;
		cout << "Введите n: ";
		cin >> n;
		for (double i = 1; i < n + 1; ++i)
			x *= i;

		double k; // k
		double y = 1;
		cout << "Введите k: ";
		cin >> k;
		for (double z = 1; z < k + 1; ++z)
			y *= z;

		double m = n - k; // s
		double j = 1;
		for (double h = 1; h < m + 1; ++h)
			j *= h;

		double e = y / j;
		cout << "Число размещений без повторений = " << e << endl;
	}


	else if (q == 2) 
	{
		double n; // n
		double x = 1;
		cout << "Введите n: ";
		cin >> n;
		for (double i = 1; i < n + 1; ++i)
			x *= i;

		cout << "Числo перестановок для n = " << x << endl;
	}

	else 
	{
		double n; // n
		double x = 1;
		cout << "Введите n: ";
		cin >> n;
		for (double i = 1; i < n + 1; ++i)
			x *= i;

		double k; // k
		double y = 1;
		cout << "Введите k: ";
		cin >> k;
		for (double z = 1; z < k + 1; ++z)
			y *= z;

		double m = n - k; // s
		double j = 1;
		for (double h = 1; h < m + 1; ++h)
			j *= h;

		double w = y / j * y;
		cout << "Числo сочетаний = " << w << endl;
	}
	system("pause");
	

}
