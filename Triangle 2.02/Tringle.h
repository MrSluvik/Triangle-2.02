#pragma once
#include <iostream>
class Tringle
{
private:  int x1, x2, x3, y1, y2, y3;

public:	double AB, BC, CA, p, P, S, r, R;//�������� ���� ��� ����������� ����� ���������� ��  �����������,���������,�����,������ ��������� �� ��������� ����,
	  Tringle(void);  //�����������: �� ������������, �� ������� ���������� ������ ����������; � ����� ������� �������� ����

	  Tringle(int, int, int, int, int, int); //�����������: � �����������, �� ������ ���������� ������ ���������� �� �������� ��.


	  void Out(); // ������: void Out() - �������� ���������� ���������� ����� �������;


	  double perimeter();


	  double area(); //double area() - ������� ����� ����������;


	  double inscribedRadius(); //double inscribedRadius() - ������� ����� ��������� ����;


	  double describedRadius();//double describedRadius() - ������� ����� ��������� ����;  


};