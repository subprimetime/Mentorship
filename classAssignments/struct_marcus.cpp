#include"stdafx.h"
#include <iostream>
#include <string.h>
#include "declarations.h"
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;




void functionCreateStruct()
{

	struct person p[10]; // array of 10 people objects

	char* people[10] = { "amit", "marcus", "steve", "giang", "erika", "negin", "fran", "elmira", "cristina", "bob" };
	
	for (int i = 0; i < 10; i++)

	{
		strcpy_s(p[i].name, people[i]);
		p[i].salary = 10;
	}
	UpdateSalary(p); // Call to function that updates salary of object p
}

int UpdateSalary(struct person *p)

{
	
	float newSalary = 125 ;
	for (int i = 0; i < 10; i++)
	{
		p[i].salary = 125; //  This works!! But too easy.

		//strcpy_s(p[i].salary, 124);
		//memcpy(&p[i].salary, (float *)&newSalary, sizeof(p[i].salary));
	}
	
	PrintStruct(*p);
	{
		return 0;
	}
}

int PrintStruct(struct person p)
{
	
	for (int i = 0; i < 10; i++)
	{
		/*p[i].name = i;
		//cout << "The Salary for " << p.name<< "  is:" << p.salary << "\n";*/
	}

	return  0;


}