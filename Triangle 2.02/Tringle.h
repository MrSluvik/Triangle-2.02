#pragma once
#include <iostream>
class Tringle
{
private:  int x1, x2, x3, y1, y2, y3;

public:	double AB, BC, CA, p, P, S, r, R;//додаткові змінні для знаходження сторін трикутника та  півпериметру,периметру,площі,радіуса вписаного та описаного кола,
	  Tringle(void);  //конструктор: по замовчуванню, що обнулює координати вершин трикутника; А також обнуляє додаткові змінні

	  Tringle(int, int, int, int, int, int); //конструктор: з параметрами, що отримує координати вершин трикутника та ініціаліхує їх.


	  void Out(); // методи: void Out() - виводить координати трикутника через пропуск;


	  double perimeter();


	  double area(); //double area() - повертає площу трикутника;


	  double inscribedRadius(); //double inscribedRadius() - повертає радіус вписаного кола;


	  double describedRadius();//double describedRadius() - повертає радіус описаного кола;  


};