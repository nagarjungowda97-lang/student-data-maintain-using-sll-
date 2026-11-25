#include<stdio.h>
#include"student.h"
void deleteallrecord(sll**ptr)
{
sll *last;
last=*ptr;
while(last)
{
*ptr=last->next;
free(last);
last=*ptr;
}
}
