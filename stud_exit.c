#include<stdio.h>
#include "student.h"
void exitfun(sll **ptr)
{
char ch;
printf("enter the option\n");
printf("press s to save and exit \n press e to exit without saving\n\n");
scanf(" %c",&ch);
switch(ch)
{
case 's': saverecord(*ptr);
printf("records saved successfullly\n");
break;
case 'e': deleteallrecord(ptr);
printf("records not saved\n");
break;
default: printf("invalid options\n");
break;
}
}
