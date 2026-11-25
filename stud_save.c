#include"student.h"
#include<stdio.h>
void saverecord(sll *ptr)
{
FILE *fp;
sll *new;
new=ptr;
fp=fopen("student.txt","w");
while(new)
{
fprintf(fp,"%d %s %f\n",new->rollno,new->name,new->persentage);
new=new->next;
}
}
