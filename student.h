#include<string.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
int rollno;
char name[50];
float persentage;
struct student *next;
}sll;
void addrecord(sll **);
void deleterecord(sll**);
void printrecord(sll*);
void modifyrecord(sll**);
void saverecord(sll*);
void sortrecord(sll*);
void deleteallrecord(sll**);
void reverselist(sll**);
void readrecord(sll**);
void exitfun(sll**);

