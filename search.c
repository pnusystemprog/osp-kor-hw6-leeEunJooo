#include "phone.h"
#include <stdio.h> 
#include <string.h>

extern int size;
extern struct Contact PhoneBook[MAX];


void searchByName()
{
	
	char searchName[10];
	printf("Enter a name to search: ");
	scanf("%s", searchName);
	for(int i = 0; i<size; i++){
	    if(!strcmp(searchName,PhoneBook[i].Name)){
		printf("%s \t %13s\n", searchName, PhoneBook[i].PhoneNumber);
		return;
	    }
	}
	printf("Oops! %s is not in the PhoneBook\n", searchName);
}

