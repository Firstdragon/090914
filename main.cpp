#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "RUSSIAN");
	double h, m, s, a, b;
	cout << "������� ������:������:������� ����" << endl;
	scanf_s("%lf : %lf : %lf", &h, &m, &s);
	if (h >= 0 && h <= 360 && m >= 0 && m <= 60 && s >= 0 && s <= 60)
	{
		a = h + (m / 60) + (s / 3600);
		b = ((a*M_PI) / 180);
		cout << b << endl;
	}
	else
	{
		cout << "�������� ����" << endl;
	}
	_getch();
	return 0;
}