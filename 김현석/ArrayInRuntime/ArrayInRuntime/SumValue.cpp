#include "SumValue.h"
#include "main.h"


void SumValue::Sum(int size, int* ar)
{
	int a = 0;
	for (int i = 0; i < size; i++)
	{
		a = a + *(ar + i);
	}
	cout << "**********" << endl;
	cout << a << endl;
}

