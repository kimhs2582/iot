#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	//����ڷκ��� �迭�� ũ�⸦ �Է¹޴´�
	ArraySizeInput input;
	int size = input.Input();

	// �Է¹��� ũ�⸸ŭ�� int�� �迭�� �����.	
	Arraymake Make;
	int* ar = Make.make(size);

	 
	ArrayValueInput valueinput;
	valueinput.ValueInput(size, ar);


	// �� ������ �հ踦 ���Ѵ�.

	SumValue sum;
	sum.Sum(size, ar);

	free(ar);
	return 0;
}


