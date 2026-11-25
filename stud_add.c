#include "student.h"
#include<stdio.h>
void addrecord(sll ** ptr)
{
sll *new;
int roll=1;
new=malloc(sizeof(sll));
printf("enter the name of the student\n");
scanf("%s",new->name);
sll *temp;
temp=*ptr;
int i=0;
l:
printf("enter the persentage of the student\n");
scanf("%f",&new->persentage);
for(i=0;i<=2;)
{
if(new->persentage >= 0 && new->persentage <= 100)
break;
else
{
printf("invalid persentage try again\n");
i++;
if(i<3)
goto l;
}
}
while(temp)
{
if(temp->rollno==roll)
{
roll++;
temp=*ptr;
}
else
temp=temp->next;
}
new->rollno=roll;
new->next=*ptr;
*ptr=new;
}
