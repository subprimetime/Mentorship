#include"stdafx.h"
#include <iostream>
#include "declarations.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void er_functionCreateStruct()

{
	struct person p[10]; //array of 10 people
	char* names[10] = { "Homer", "Marge", "Bart", "Lisa", "Maggie", "Ned", "Itchy", "Scratchy", "Krusty", "Apu" };
	for (int i = 0; i < 10; i++)

	{
		strcpy_s(p[i].name, names[i]);
		p[i].salary = 10;
	}
	UpdateSal(p); // call to function to update salary
}

int UpdateSal(struct person *p) // update salary of p

{
	float newSalary = 125;
	for (int i = 0; i < 10; i++)
	{
		p[i].salary = 125;
		memcpy(&p[i].salary, &newSalary, sizeof(p[i].salary));
		er_PrintStruct(p[i]); //calls PrintStruct passing only one elements.
	}
			{
				er_PrintStruct(p);
			}
				{
					return 0;
				}
}

int er_PrintStruct(struct person p) // function accepts only one array element at a time.
{
	{
		cout << "The Salary for " << p.name << "  is:" << p.salary << "\n";
	}
				{
					return 0;
				}
}

char er_PrintStruct(struct person *p) // Function to print when whole p.name array is passed.
{
	for (int i = 0; i < 10; i++)
	{
		cout << "The Salary for " << p[i].name << "  is:" << p[i].salary << "\n";
	}
	return 0;
}