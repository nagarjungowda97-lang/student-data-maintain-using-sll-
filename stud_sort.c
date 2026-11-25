#include<stdio.h>
#include"student.h"
void sortrecord(sll *ptr)
{
int c=0;
int i,j;
sll *new;
new=ptr;
while(new)
{
c++;
new=new->next;
}
char op;
sll *p1,*p2,t;
p1=ptr;
printf("press n sort wth name \n press p sort with persentage \n");
scanf(" %c",&op);
if(op=='n')
{
for(i=0;i<c-1;i++)
{
p2=p1->next;
for(j=0;j<c-1-i;j++)
{
if((strcmp(p1->name,p2->name))>0)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.persentage=p1->persentage;
p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->persentage=p2->persentage;
p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->persentage=t.persentage;
}
p2=p2->next;
}
p1=p1->next;
}
}
else if(op=='p')
{
for(i=0;i<c-1;i++)
{
p2=p1->next;
for(j=0;j<c-1-i;j++)
{
if(p1->persentage < p2->persentage)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.persentage=p1->persentage;
p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->persentage=p2->persentage;
p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->persentage=t.persentage;
}
p2=p2->next;
}
p1=p1->next;
}
}
}
