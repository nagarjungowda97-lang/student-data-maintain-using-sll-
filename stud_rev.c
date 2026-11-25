#include<stdio.h>
#include"student.h"
void reverselist(sll **ptr)
{
sll *new;
new=*ptr;
int c=0;
int i;
while(new)
{
c++;
new=new->next;
}
if(*ptr==0)
{
printf("no record found\n");
return;
}
if(c>1)
{
sll **a= malloc(sizeof(sll*)*c);
sll*t=*ptr;
for(i=0;i<c;i++)
{
a[i]=t;
t=t->next;
}
for(i=c-1;i>0;i--)
a[i]->next=a[i-1];
a[0]->next=0;
*ptr=a[c-1];
}
}
