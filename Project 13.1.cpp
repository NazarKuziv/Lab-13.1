// Lab_13_1.cpp
// < Кузів Назар >
// Лабораторна робота № 13.1
// Простори імен
// Варіант 6


#include <iostream>
#include <math.h>
#include <iomanip>
#include <Windows.h>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	SetConsoleOutputCP(1251);

	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(28) << "Ряд Тейлора" << setw(15) << "|" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(9) << "log(1 - x)" << "  |"
		<< setw(7) << "s" << "    |"
		<< setw(5) << "n" << "    |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	
	x = x_p;

	while (x <= x_k && x >= -1 && x < 1) {

		sum(); 

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(4) << log(1 - x) << " |"
			<< setw(10) << setprecision(4) << s << " |"
			<< setw(5) << n << "    |"
			<< endl;
		x += dx;
	}

	cin.get();
	return 0;
}