#include<stdio.h>
#include"student.h"
void readrecord(sll ** ptr)
{
FILE *fp;
char s[100];
fp=fopen("student.txt","r");
sll *last;
last=*ptr;
if(fp==0)
{
printf("no files is present\n");
return;
}
int c=0,i;
while((fgets(s,100,fp))!=0)
c++;
rewind(fp);
for(i=0;i<c;i++)
{
sll *new;
new=malloc(sizeof(sll));
new->next=0;
fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->persentage);
if(*ptr==0)
*ptr=new;
else
{
last=*ptr;
while(last->next)
last=last->next;
last->next=new;
}
}
}
