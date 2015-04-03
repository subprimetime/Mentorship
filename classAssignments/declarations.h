// Place your funtion declarations here


#ifndef DECLARATIONS_H
#define DECLARATIONS_H

void functionCreateStruct();
int UpdateSalary(struct person *p);
int PrintStruct(struct person p); //  FYI - This function only accepts one element of an array.
char mar_PrintStruct(struct person *p); // FYI this accepts a full array to be passed into it.

struct person
{

	char name[10];
	float salary;

};

#endif