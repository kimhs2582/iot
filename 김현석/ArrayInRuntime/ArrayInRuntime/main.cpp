#include <iostream>
#include <stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	//사용자로부터 배열의 크기를 입력받는다
	ArraySizeInput input;
	int size = input.Input();

	// 입력받은 크기만큼의 int의 배열을 만든다.	
	Arraymake Make;
	int* ar = Make.make(size);

	 
	ArrayValueInput valueinput;
	valueinput.ValueInput(size, ar);


	// 각 원소의 합계를 구한다.

	SumValue sum;
	sum.Sum(size, ar);

	free(ar);
	return 0;
}


