#include<stdio.h>
#include"student.h"
void printrecord(sll *ptr)
{
if(ptr==0)
printf("no record found\n");
else
{
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->persentage);
ptr=ptr->next;
}
}
}
