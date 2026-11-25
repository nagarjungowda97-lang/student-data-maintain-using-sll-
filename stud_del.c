#include<stdio.h>
#include "student.h"
#include<string.h>
void deleterecord(sll**ptr)
{
char op;
int m;
printf("press r to delete from the rollno \n press n to delete from the name \n");
scanf(" %c",&op);
sll *last;
sll *prev;
last=*ptr;
prev=*ptr;
if(op=='r')
{
printf("enter the rollno to delete\n");
scanf("%d",&m);
while(last)
{
if(last->rollno==m)
{
if(last==*ptr)
*ptr=last->next;
else
prev->next=last->next;
free(last);
}
prev=last;
last=last->next;
}
}
else if(op=='n')
{
char f[30];
int c=0;
printf("enter the name you want to delete\n");
scanf("%s",f);
while(last)
{
if(strcmp(last->name,f)==0)
{
c++;
printf("%d %s %f\n",last->rollno,last->name,last->persentage);
}
last=last->next;
}
last=*ptr;
if(c==1)
{
while(last)
{
if(strcmp(last->name,f)==0)
{
if(last==*ptr)
*ptr=last->next;
else
prev->next=last->next;
free(last);
}
prev=last;
last=last->next;
}
}
else
{
printf("enter the rollno to delete\n");
scanf("%d",&m);
while(last)
{
if(last->rollno==m)
{
if(last==*ptr)
*ptr=last->next;
else
prev->next=last->next;
free(last);
}
prev=last;
last=last->next;
}
printf("no rollno present\n");
}
}
}
