#include"student.h"
#include<stdio.h>
int main()
{
sll *headptr=0;
readrecord(&headptr);
char op;
while(1)
{
printf("************ STUDENT RECORD MENU *****************\n");
printf("************ ENTER YOUR OPTION *******************\n");
printf(" PRESS a: ADD NEW RECORD \n PRESS d: DELETE A RECORD \n PRESS s: SLOW THE LIST \n PRESS m: MODIFY A RECORD \n PRESS v: SAVE RECORDS\n PRESS e: EXIT \n PRESS t: SORT THE DATA \n PRESS l: DELETE ALL THE RECORS \n PRESS r: REVERSE THE LIST \n");
scanf(" %c",&op);
switch(op)
{
case 'a': addrecord(&headptr);break;
case 'd': deleterecord(&headptr);break;
case 's': printrecord(headptr);break;
case 'm': modifyrecord(&headptr);break;
case 'v': saverecord(headptr);break;
case 'e': exitfun(&headptr);break;
case 't': sortrecord(headptr);break;
case 'l': deleteallrecord(&headptr);break;
case 'r': reverselist(&headptr);break;
}
}
}
