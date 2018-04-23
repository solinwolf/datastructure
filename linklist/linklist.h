

#ifndef _LINKLIST_H
#define _LINKLIST_H

typedef struct Node{
	int data;
	struct Node* next;
}Node;
typedef struct Node* LinkList;

void createLinkList(LinkList *L,int num);
Node* getElement(LinkList *L,int pos);

#endif

