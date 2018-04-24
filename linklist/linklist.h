

#ifndef _LINKLIST_H
#define _LINKLIST_H

typedef struct Node{
	int data;
	struct Node* next;
}Node;
typedef struct Node* LinkList;

void createLinkList(LinkList *L,int num);
Node* getElement(LinkList L,int pos);
void destroyLinkList(LinkList L);
int getLen(LinkList L);

int insertElement(LinkList L,int pos,int data);
int deleteElement(LinkList L,int pos);

#endif

