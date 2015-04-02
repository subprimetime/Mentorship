// Place your funtion declarations here


#ifndef DECLARATIONS_H
#define DECLARATIONS_H

void functionCreateStruct();
int UpdateSalary(struct person *p);
int PrintStruct(struct person p);
int mar_PrintStruct(struct person *p);

struct person
{

	char name[10];
	float salary;

};

#endif