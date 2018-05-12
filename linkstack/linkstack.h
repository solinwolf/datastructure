#ifndef _LINKSTACH_H__
#define _LINKSTACH_H__

typedef char Elemtype;
#define Status int
#define ERROR 0
#define OK    1

typedef struct Node{
	Elemtype data;
	struct Node *next;
}Node;
typedef struct Node *LinkStack;
Status InitLinkStack(LinkStack *ls);
Status LinkStackPush(LinkStack *ls,Elemtype data);
Status LinkStackPop(LinkStack *ls,Elemtype *data);
Status DestroyLinkStack(LinkStack *ls);
int GetLengh(LinkStack ls);
Status LinkStackEmpty(LinkStack ls);

#endif