
#include "linklist.h"
#include <stdio.h>
#include <malloc.h>

void createLinkList(LinkList *L,int num)
{
	LinkList p = NULL;
	int i;
	*L = (Node*)malloc(sizeof(Node)); /*1.定义链表头节点*/
	if(NULL != *L)                    /*2.初始化头指针为NULL*/
		(*L) -> next = NULL;
	for(i=0;i<num;i++)
	{
		p = (Node*)malloc(sizeof(Node));  /*3.申请节点空间*/
		if(NULL == p)                     /*4.如果申请不到节点空间，则返回*/
			return ; 
		scanf("%d",&(p->data));           /*5.申请到节点空间后设置数据域*/
		p->next = (*L) -> next;           /*6.“头插法”插入节点*/
		(*L) -> next = p;
	}
}

Node* getElement(LinkList *L,int pos)
{
	Node* p = (*L) -> next;
	int i=0;
	while(p && i<pos)
	{
		p=p->next;
		i++;
	}
	if(!p || i>pos)
		return NULL;
	return p;
}



