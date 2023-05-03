#include "plenty.h"

Plenty Plenty::operator+(int elem)
{
	if (!this->chkEl(elem)) {

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
	return Plenty();
}

string Plenty::getEl()
{
	string temp;
	for (size_t i = 0; i < this->size; i++)
	{
		temp.append(to_string(this->array[i]));
		temp.append(" ");
	}
	return temp;
}

bool Plenty::chkEl(int elem)
{
	bool flag = false;
	for (size_t i = 0; i < this->size; i++)
	{
		if (this->array[i] == elem) { flag = true; break; }
	}
	return flag;
}

Plenty Plenty::operator+=(Plenty& plenty1)
{
	Plenty plenty3(*this);
	for (size_t i = 0; i < plenty1.size; i++)
	{
		plenty3+plenty1.array[i];
	}
	return plenty3;
}

ostream& operator<<(ostream& output, Plenty& plenty)
{
	string temp;
	for (size_t i = 0; i < plenty.size; i++)
	{
		temp.append(to_string(plenty.array[i]));
		temp.append(" ");
	}
	return output << temp;
	
	
	// TODO: вставьте здесь оператор return
}
