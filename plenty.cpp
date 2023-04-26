#include "plenty.h"

void Plenty::addEl(int elem)
{
	int* temp = new int[this->size + 1];
	for (size_t i = 0; i < this->size; i++)
	{
		temp[i] = this->array[i];
	}
	temp[this->size] = elem;
	delete[] this->array;
	this->array = temp;
	this->size++;
}

string Plenty::getEl()
{
	string temp;
	for (size_t i = 0; i < this->size; i++)
	{
		 temp.append (to_string(this->array[i]));
		 temp.append(" ");
	}
	return temp;
}

bool Plenty::chkEl(int elem)
{
	bool flag = false;
	for (size_t i = 0; i < this->size; i++)
	{
		if (this->array[i] = elem) { flag = true; break;}
	}
	return flag;
}
