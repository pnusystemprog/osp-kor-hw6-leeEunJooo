#include "phone.h"
#include <stdio.h>
#include <string.h> 
extern int size;
extern struct Contact PhoneBook[MAX];

void deleteByName()
{
	char findname[10];
	printf("Enter a name to delete: ");
	scanf("%s", findname);
	for(int i = 0; i < size; i++){
		if(strcmp(findname,PhoneBook[i].Name) == 0){
			for(int j = i; j < size-1; j++)	PhoneBook[j] = PhoneBook[j+1];
			size--;
		    printf("%s is deleted...\n",findname);
		    return;
		}
	}
	printf("Oops! %s is not in the PhoneBook\n", findname);
}
