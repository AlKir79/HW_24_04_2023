#pragma once
#include <iostream>
#include <string>
using namespace std;

class Plenty
{
private:
	int* array;
	int size;
	friend ostream& operator << (ostream& output, Plenty& plenty);
public:
	// конструктор по умолчанию
	Plenty() {
		this->array = new int[1];
		this->array[0] = 0;
		this->size = 1;
	}
	// конструктор 
	Plenty(int* array, int size) {
		this->array = new int[size];
		for (size_t i = 0; i < size; i++)
		{
			this->array[i] = array[i];
		}
		this->size = size;
	}
	// конструктор копирования
	Plenty(const Plenty& plenty) {
		this->array = new int [plenty.size];
		for (size_t i = 0; i < plenty.size; i++)
		{
			this->array[i] = plenty.array[i];
		}
		this->size = plenty.size;
	}
	// деструктор
	~Plenty() {
		if (this->array) delete[]this->array;
	}
	Plenty operator+(int elem);
	string getEl();
	bool chkEl(int elem);
	Plenty operator+=(Plenty& plenty1);


};



