#include"stdafx.h"
#include <iostream>
#include <string.h>
#include "declarations.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*!This function creates an struct person object (p[10]) and adds 10 names to it.

*/
	void functionCreateStruct()
	{

		struct person p[10]; // array of 10 names

		char* people[10] = { "amit", "marcus", "steve", "giang", "erika", "negin", "fran", "elmira", "cristina", "bob" };

		for (int i = 0; i < 10; i++)

		{
			strcpy_s(p[i].name, people[i]);
			p[i].salary = 10;
		}
		UpdateSalary(p); // Call to function that updates salary of object p
	}

	/*!This function addes a newSalary value to p[i].salary
	@param[in] struct person *p

	@return 0 if there is an error.
	*/
	int UpdateSalary(struct person *p) // Updates Salary to person p

	{
		float newSalary = 125;
		for (int i = 0; i < 10; i++)
		{
			//p[i].salary = 125; //  This works!! But too easy.

			memcpy(&p[i].salary, &newSalary, sizeof(p[i].salary));

			PrintStruct(p[i]); //calls PrintStruct passing only one elements.
		}
			{

				mar_PrintStruct(p);
			}
				{
					return 0;
				}
	
	}
	/*!This function takes a base elenent of p and prints a result.
	@param[in] struct person p

	@return 0 if there is an error.
	*/
	int PrintStruct(struct person p) // function accepts only one array element at a time.
	{
		{
			cout << "The Salary for " << p.name << "  is:" << p.salary << "\n";
		}

	
				{
				return 0;
				}
	}
	/*!This function takes an array of *p and prints a result.
	@param[in] struct person *p

	@return 0 if there is an error.
	*/
	char mar_PrintStruct(struct person *p) // Function to print when whole p.name array is passed.
	{

		for (int i = 0; i < 10; i++)
		{
			
			cout << "The Salary for " << p[i].name << "  is:" << p[i].salary << "\n";
		}
				{
					return 0;
				}
	}
	
	
	// test