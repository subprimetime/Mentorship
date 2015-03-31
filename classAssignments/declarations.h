// Place your funtion declarations here


#ifndef DECLARATIONS_H
#define DECLARATIONS_H

int functionCreateStruct();
int UpdateSalary(struct person *p);
int PrintStruct(struct person p);


struct person
{

	char name[50];
	float salary;

};

#endif