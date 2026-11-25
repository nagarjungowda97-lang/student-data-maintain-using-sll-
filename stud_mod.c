#include<stdio.h>
#include "student.h"
void modifyrecord(sll **ptr)
{
char op;
int a;
int c=0;
int m=0;
char s[100];
float f1;
sll *del;
del=*ptr;
printf("enter the record to seach for modification\n");
printf("press r to search from rollno\n");
printf("press n to search from name\n");
printf("press p to seach from persentage\n");
scanf(" %c",&op);
if(op=='r')
{
printf("enter the rollno to search\n");
scanf("%d",&a);
while(del)
{
if(del->rollno==a)
{
printf("%d %s %f\n",del->rollno,del->name,del->persentage);
printf("enter the updated name and persenatge\n");
scanf("%s%f",s,&f1);
strcpy(del->name,s);
del->persentage=f1;
}
del=del->next;
}
}
else if(op=='n')
{
printf("enter the name to seach\n");
scanf("%s",s);
while(del)
{
if(strcmp(s,del->name)==0)
{
c++;
printf("%d %s %f\n",del->rollno,del->name,del->persentage);
}
del=del->next;
}
del=*ptr;
if(c==1)
{
while(del)
{
if(strcmp(s,del->name)==0)
{
printf("enter the updated name and persenatge\n");
scanf("%s%f",s,&f1);
strcpy(del->name,s);
del->persentage=f1;
}
del=del->next;
}
}
else
{
while(del)
{
if(strcmp(s,del->name)==0)
{
//printf("%d %s %f\n",del->rollno,del->name,del->persentage);
printf("enter the rollno to modify\n");
scanf("%d",&a);
printf("enter the updated name and persenatge\n");
scanf("%s%f",s,&f1);
strcpy(del->name,s);
del->persentage=f1;
}
del=del->next;
}
}
}
else if(op=='p')
{
printf("enter the persentage to search\n");
scanf("%f",&f1);
while(del)
{
if(del->persentage==f1)
{
m++;
printf("%d %s %f\n",del->rollno,del->name,del->persentage);
}
del=del->next;
}
del=*ptr;
if(m==1)
{
if(del->persentage==f1)
{
printf("enter the updated name and persenatge\n");
scanf("%s%f",s,&f1);
strcpy(del->name,s);
del->persentage=f1;
}
del=del->next;
}
else
{
while(del)
{
if(f1==del->persentage)
{
//printf("%d %s %f\n",del->rollno,del->name,del->persentage);
printf("enter the rollno to modify\n");
scanf("%d",&a);
printf("enter the updated name and persenatge\n");
scanf("%s%f",s,&f1);
strcpy(del->name,s);
del->persentage=f1;
}
del=del->next;
}
}
}
}

