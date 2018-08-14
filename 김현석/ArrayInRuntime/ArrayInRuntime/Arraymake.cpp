#include "Arraymake.h"
#include "main.h"


int* Arraymake::make(int size)
{
	int* ar = (int*)malloc(sizeof(int)*size);
	return ar;
}

