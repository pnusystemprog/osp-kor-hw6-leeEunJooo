#include <stdio.h>
#include <string.h>
#include "phone.h"
#include <stdbool.h>

extern int size;
/*****************
** Your code..
** This function should be implemented in register.c
*************************/
void registerPhoneData()
{
    char password[10];
    bool isvalid = false;
    
    
    for(int i=0; i<3; i++){
	printf("Password : ");
	scanf("%s", password);
	if(!strcmp(password, "qwerty1234")){
	 isvalid = true;
	 break;
	}
        else{
	  if(i == 0)
	  printf("Not Matched!!!\n");
	  else if(i == 1)
	  printf("Not Matched(twice)!!!\n");
	  else printf("Not Matched(3 times)!!!\n");	
	}
    
    }
	
    if(isvalid){
    printf("New User Name: ");
    scanf("%s", PhoneBook[size].Name);
    printf("PhoneNumber: ");
    scanf("%s", PhoneBook[size].PhoneNumber);
    printf("Registered...\n");
    ++size;
    }
    else{
    printf("You are not allowed to cccees PhoneBook.");
   }
}

