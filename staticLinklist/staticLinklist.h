

#ifndef __STATICLINKLIST_H__
#define __STATICLINKLIST_H__

#define MAX_SIZE 10
#define Elemtype int

#define OK 0
#define ERROR 1
typedef int Status;

typedef struct
{
	Elemtype data;
	int cur;
}Component,StaticLinklist[MAX_SIZE];

Status InitStaticLinkList(StaticLinklist SLL);
int Malloc_SLL(StaticLinklist SLL);
int GetLengh(StaticLinklist SLL);
Status InsertStaticElement(StaticLinklist SLL,int pos,Elemtype data);
#endif
