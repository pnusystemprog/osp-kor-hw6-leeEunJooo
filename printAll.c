#include <stdio.h>
#include "phone.h"

extern int size;
extern struct Contact PhoneBook[MAX];

void printAll()
{
	printf("<<Display all contacts in the PhoneBook>>\n");
	for(int i = 0; i < size; i++)
	    printf("%10s %13s\n",PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
}

