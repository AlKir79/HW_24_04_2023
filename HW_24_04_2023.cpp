// HW_24_04_2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"plenty.h"
using namespace std;

int main()
{
	int size = 4;
	int* array = new int[size]{ 1,2,3,4 };
	Plenty plenty1(array, 4);
	cout << plenty1.getEl();
	cout << endl;
	plenty1.addEl(7);
	cout << plenty1.getEl();
	cout << endl;
	if (plenty1.chkEl(3)) cout << "true" << endl;
	else cout << "false";
}

