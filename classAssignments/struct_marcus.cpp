#include"stdafx.h"
#include <iostream>
#include <string.h>
#include "declarations.h"
#include <memory.h>
using namespace std;






void functionCreateStruct()
{

	struct person marcus[10];
	char* people[10] = { "amit", "marcus", "steve", "giang", "erika", "negin", "fran", "elmira", "cristina", "bob" };
	
	for (int i = 0; i < 10; i++)

	{
		//char* test = people[i];
		strcpy_s(marcus[i].name, people[i]);
			
	}

}



