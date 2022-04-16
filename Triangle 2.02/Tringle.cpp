#include "Tringle.h"
#include <iostream>
#include <cmath>
Tringle::Tringle() {//конструктор: по замовчуванню, що обнулює координати вершин трикутника;
	x1 = 0;	x2 = 0; x3 = 0; y1 = 0;	y2 = 0;	y3 = 0;
	
};


Tringle::Tringle(int x1, int x2, int x3, int y1, int y2, int y3) {//конструктор: з параметрами, що отримує координати вершин трикутника та ініціаліхує їх.
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
};


void Tringle::Out() {
	std::cout << "Координати трикутника " << "X1 = " << x1 << " X2 = " << x2 << " X3 =" << x3 << " Y1 = " << y1 << " Y2 = " << y2 << " Y3 = " << y3 << std::endl;// методи: void Out() - виводить координати трикутника через пропуск;
}


double Tringle::perimeter() { //double perimeter() - повертає периметр трикутника;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));//знаходимо по координатах
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));//довжину сторін
	CA = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));//трикутника
	P = AB + BC + CA;//знаходимо периметр даного трикутника
	return P;
}


double Tringle::area() {//double area() - повертає площу трикутника;
	p = P / 2;//півпериметр потрібний для знаходження площі трикутника за трьома сторонами
	S = sqrt(p * ((p - AB) * (p - BC) * (p - CA)));//знаходим площу трикутника
	return S;
}


double Tringle::inscribedRadius() {//double inscribedRadius() - повертає радіус вписаного кола;
	r = S / p; //знаходим радіус вписаного кола 
	return r;
}


double Tringle::describedRadius() {//double describedRadius() - повертає радіус описаного кола;
	R = (AB * BC * CA) / (S * 4);//знаходим радіус описаного кола 
	return R;
}
