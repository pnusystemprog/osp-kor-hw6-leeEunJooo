#include <stdio.h>
#include "phone.h"

extern int size;
extern struct Contact PhoneBook[MAX];

void printAll()
{
	printf("<<Display all contacts in the PhoneBook>>\n");
	//for(int i = 0; i < size; i++)
	    printf("%s %13s\n",PhoneBook[0].Name, PhoneBook[0].PhoneNumber);
}

