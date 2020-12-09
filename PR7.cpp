
#include <iostream>
#include <cmath>
#include <iostream>
using namespace std;

void task921()
{
	const int A = 10, B = 8;
	int MAXI = 0, MAXJ = 0;
	int c[A][B];
	for (size_t i = 0; i < A; i++)
	{
		for (size_t j = 0; j < B; j++)
		{
			c[i][j] = rand() % 30;
			cout << c[i][j] << "\t";

		}
		cout << endl;
	}
	for (size_t i = 0; i < A; i++)
	{
		for (size_t j = 0; j < B; j++)
		{
			if (c[i][j] > c[MAXI][MAXJ])
			{
				MAXI = i;
				MAXJ = j;
			}

		}

	}
	cout << endl;
	cout << "Maximum: " << c[MAXI][MAXJ] << endl;
}
void task956()
{
	const int STROKA = 8, RYAD = 8;
	int c[STROKA][RYAD];
	int sum3stroka = 0, s = 0, sumsstolb = 0, k = 0;
	for (size_t i = 0; i < STROKA; i++)
	{
		for (size_t j = 0; j < RYAD; j++)
		{
			c[i][j] = rand() % 30;
			cout << c[i][j] << "\t";

		}
		cout << endl;
	}
	for (size_t j = 0; j < RYAD; j++)
	{
		sum3stroka += c[2][j];
	}

	cout << "\n\nSumma 3ei stroki: " << sum3stroka;
	cout << "\ninput S: ";
	cin >> s;
	for (size_t i = 0; i < STROKA; i++)
	{
		sumsstolb += c[i][s];
	}
	cout << "Summa S stolba: " << sumsstolb;
	sumsstolb = 0;
	for (size_t i = 0; i < STROKA; i++)
	{
		sumsstolb += c[i][2];
	}
	sum3stroka = 0;
	cout << "\nSumma 2 stolba: " << sumsstolb;
	cout << "\ninput k: ";
	cin >> k;
	for (size_t j = 0; j < RYAD; j++)
	{
		sum3stroka += c[k][j];
	}

	cout << "\n\nSumma k-oi stroki: " << sum3stroka;
}
void task991()
{
	int n = 0, m = 0;
	int MAXI = 0, MAXJ = 0;
	cout << "input n: ";
	cin >> n;
	cout << endl;
	cout << "input m: ";
	cin >> m;
	int c[100][100];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			c[i][j] = rand() % 100;
			cout << c[i][j] << "\t";

		}
		cout << endl;
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (c[i][j] > c[MAXI][MAXJ])
			{
				MAXI = i;
				MAXJ = j;
			}

		}

	}
	cout << endl;
	cout << "Maximum: " << c[MAXI][MAXJ] << endl;
	int temp = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			temp = c[i][j];
			c[i][j] = c[MAXI][MAXJ];
			c[MAXI][MAXJ] = temp;

		}
		cout << endl;
	}




	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cout << c[i][j] << "\t";

		}
		cout << endl;
	}
}
void task1026()
{


	const int STROKA = 5, RYAD = 5;
	int c[STROKA][RYAD], sumotr = 0, countplus = 0, k = 0, a = 0, b = 0, counta = 0, countb = 0;
	for (size_t i = 0; i < RYAD; i++)
	{
		for (size_t j = 0; j < STROKA; j++)
		{
			c[i][j] = rand() % 25 - 5;
			cout << c[i][j] << "\t";

		}
		cout << endl;
	}
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	for (size_t i = 0; i < RYAD; i++)
	{
		for (size_t j = 0; j < STROKA; j++)
		{
			if (c[i][j] < 0)
			{
				sumotr += c[i][j];
			}
			if (c[i][j] > 0)
			{
				countplus++;
			}
			if (c[i][j] % a == 0)
			{
				counta++;
			}
			if (c[i][j] % b == 0)
			{
				countb++;
			}
		}
		k++;
		cout << "\n" << k << ") " << "\nСумма отрицательных: " << sumotr << " ";
		sumotr = sumotr - sumotr;
		cout << "\nКоличество положительных: " << countplus << " ";
		countplus = countplus - countplus;
		cout << "\nКратных a " << counta << " ";
		counta = 0;
		cout << "\nКратных b " << countb << " ";
		countb = 0;

	}
	cout << endl;

}
void task1061()
{
	int k, s;
	const int n = 15, m = 8;
	double a[n][m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 35 + 1;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << "k="; cin >> k;
	cout << "s="; cin >> s;

	for (int i = k; i < (s - 1 + k) / 2; i++)
		swap(a[i], a[s - 2 + k - i]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	//task921();
	//task956();
	//task991();
	//task1026();
	//task1061();


}
//При реализации заданий использовать функции с параметрами (объявление массива и выбор задания - в функции Main, а заполнение, вывод на экран, обработка массива - в дополнительных функциях) 
/* 921.Найти максимальный элемент среди максимальных элементов строк Двумерного массива целых чисел. Определить номер строки и столбца для такого элемента.
956.Дан Двумерный массив. Определить сумму всех элементов:
а) третьей строки массива;
б) s-го столбца массива.
в) второго столбца массива;
г) k-й строки массива.
,991,
Дана матрица размером n × m. Переставляя ее строки и столбцы, добиться того, чтобы наибольший элемент (или один из них) оказался в верхнем левом углу.

1026
Дан Двумерный массив целых чисел. В каждой его строке найти:
а) сумму нечетных элементов;
б) количество положительных элементов;
в) количество элементов, кратных а или b.
,1061
Дан Двумерный массив из 15 строк. Переставить в обратном порядке строки, расположенные между k-й и s-й строками (то есть с k+1-й по s–1-ю). Значения k и s вводятся с клавиатуры, k < s.*/


