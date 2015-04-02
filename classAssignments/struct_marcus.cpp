#include"stdafx.h"

using namespace std;


#include <iostream>
#include <string.h>
#include "declarations.h"
#include <stdio.h>
#include <stdlib.h>



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

		float newSalary = 125;
		for (int i = 0; i < 10; i++)
		{
			//p[i].salary = 125; //  This works!! But too easy.

			//strcpy(p[i].salary, newSalary);
			memcpy(&p[i].salary, &newSalary, sizeof(p[i].salary));
		}

		mar_PrintStruct(p); //calls PrintStruct with struct person
		{
			return 0;
		}
	}

	int mar_PrintStruct(struct person *p)
	{


		for (int i = 0; i < 10; i++)
		{
			//cout << "The Salary for " << (p[i].name << "  is:" << p[i].salary << "\n";

			cout << "The Salary for " << p[i].name << "  is:" << *(&p[i].salary) << "\n";
		}
		return 0;
	}
