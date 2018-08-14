#include "ArrayValueInput.h"
#include "main.h"


int* ArrayValueInput::ValueInput(int size, int* ar)
{

	for (int i = 0; i < size; i++)
	{
		 ar[i] = rand() % 10;
	}
	cout << "**********"<<endl;
	for (int i=0; i < size; i++)
	{
		cout << ar[i] << endl;
	}
	
	return ar;

}

