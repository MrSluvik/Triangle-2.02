#include "Tringle.h"
#include <iostream>
#include <cmath>
Tringle::Tringle() {//�����������: �� ������������, �� ������� ���������� ������ ����������;
	x1 = 0;	x2 = 0; x3 = 0; y1 = 0;	y2 = 0;	y3 = 0;
	
};


Tringle::Tringle(int x1, int x2, int x3, int y1, int y2, int y3) {//�����������: � �����������, �� ������ ���������� ������ ���������� �� �������� ��.
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
};


void Tringle::Out() {
	std::cout << "���������� ���������� " << "X1 = " << x1 << " X2 = " << x2 << " X3 =" << x3 << " Y1 = " << y1 << " Y2 = " << y2 << " Y3 = " << y3 << std::endl;// ������: void Out() - �������� ���������� ���������� ����� �������;
}


double Tringle::perimeter() { //double perimeter() - ������� �������� ����������;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));//��������� �� �����������
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));//������� �����
	CA = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));//����������
	P = AB + BC + CA;//��������� �������� ������ ����������
	return P;
}


double Tringle::area() {//double area() - ������� ����� ����������;
	p = P / 2;//���������� �������� ��� ����������� ����� ���������� �� ������ ���������
	S = sqrt(p * ((p - AB) * (p - BC) * (p - CA)));//�������� ����� ����������
	return S;
}


double Tringle::inscribedRadius() {//double inscribedRadius() - ������� ����� ��������� ����;
	r = S / p; //�������� ����� ��������� ���� 
	return r;
}


double Tringle::describedRadius() {//double describedRadius() - ������� ����� ��������� ����;
	R = (AB * BC * CA) / (S * 4);//�������� ����� ��������� ���� 
	return R;
}
