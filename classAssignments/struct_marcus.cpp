#include"stdafx.h"
#include <iostream>
#include "declarations.h"
using namespace std;






void functionCreateStruct()
{

	struct person marcus[10];
	char* people[] = { "amit", "marcus", "steve", "giang", "erika", "negin", "fran", "elmira", "cristina", "bob" };
	
	for (int i = 0; i < 10; i++)

	{
		char* test = people[i];
		strncpy(marcus[i].name, (char*)test, 1);
	}

}



