// HW_24_04_2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"plenty.h"
using namespace std;

int main()
{
	int size = 4;
	int size1 = 5;
	int* array = new int[size]{ 1,2,3,4 };
	int* array1 = new int[size1] {5, 6, 7, 8, 9};
	Plenty plenty(array, 4);
	Plenty plenty1(array1, 5);
//	cout << plenty.getEl();
	cout << plenty;
	cout << endl;
	plenty + 7;
	plenty + 1;
	plenty + 2;
//	cout << plenty.getEl();
	cout << plenty;
	cout << endl;
	Plenty plenty3 = plenty += plenty1;
//	Plenty plenty3 = plenty.addPlenty(plenty1,size1);
//	cout << plenty3.getEl();
	cout << plenty3;


}

