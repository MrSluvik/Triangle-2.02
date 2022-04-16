// Написати клас Triangle (трикутник), що містить цілочисельні поля координати вершин трикутника x1, y1, x2, y2, x3, y3.
//Реалізувати конструктори : по замовчуванню, що обнулює координати вершин трикутника; з параметрами, що отримує координати вершин трикутника та ініціаліхує їх.
//Реалізувати методи : void Out() - виводить координати трикутника через пропуск; double area() - повертає площу трикутника;
//double perimeter() - повертає периметр трикутника; double inscribedRadius() - повертає радіус вписаного кола; double describedRadius() - повертає радіус описаного кола;
#include <iostream>
#include<Windows.h>
#include <cmath>
#include "Tringle.h"
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Tringle First(2, 4, 3, 0, 2, 7);
	First.Out();//координати 
	cout << "Периметр трикутника = " << First.perimeter() << endl;
	cout << "Площа  трикутника = " << First.area() << endl;
	cout << "Радіус вписаного кола у трикутник = " << First.inscribedRadius() << endl;
	cout << "Радіус описаного кола навколо  трикутника = " << First.describedRadius() << endl;
}



