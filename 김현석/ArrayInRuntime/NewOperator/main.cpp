#include <iostream>
#include <stdlib.h>
#include "Korean.h"
#include "American.h"
#include "Human.h"

using namespace std;

int main()
{
	int value;
	cin >> value;

	// È¦¼ö
	Human* p;
	if (value % 2 != 0)
		p = new Korean;
	else
		p = new American;

	p->SayHello();

	return 0;
}
