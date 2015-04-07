// Place your funtion declarations here


#ifndef DECLARATIONS_H
#define DECLARATIONS_H

void functionCreateStruct();
void er_functionsCreateStruct();
int UpdateSalary(struct person *p);
int UpdateSal(struct person *p);
int PrintStruct(struct person p); //  FYI - This function only accepts one element of an array.
int er_PrintStruct(struct person p);
char mar_PrintStruct(struct person *p); // FYI this accepts a full array to be passed into it.
char er_PrintStruct(struct person *p);

struct person
{

	char name[10];// change to pointer char* name (Person2)  dynamic memory allocation (malloc) free strcpy
	float salary; // 

};

#endif