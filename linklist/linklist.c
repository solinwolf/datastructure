
#include "linklist.h"
#include <stdio.h>
#include <malloc.h>

void createLinkList(LinkList *L,int num)
{
	LinkList p = NULL;
	int i;
	*L = (LinkList)malloc(sizeof(Node)); /*1.定义链表头节点*/
	if(NULL != *L)                    /*2.初始化头指针为NULL*/
		(*L) -> next = NULL;          /*此时头指针指向头结点，且一般不为NULL*/
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


/*初始条件：链表L已经存在，且入参1<<pos<<ListLengh(L)*/
Node* getElement(LinkList L,int pos)
{
	LinkList p = L -> next;         /*L是头指针，指向头结点，头结点的指针域指向第一个节点*/
	int i=1;         /*i指向当前的节点，如果i==pos，则返回i指向的节点*/
	if(i>pos)     
		return NULL;
	while(p && i<pos)
	{
		p=p->next;
		i++;
	}
	if(!p)
		return NULL;
	return p;
}

int getLen(LinkList L)
{
	LinkList p = L -> next;
	int ret = 0;
	while(p)
	{
		p = p -> next;
		ret++;
	}
	return ret;
	
}
/*初始条件：链表L已经存在，且入参1<<pos<<length(L)+1*/
/*如果当前的长度为0，则pos只能为1*/
int insertElement(LinkList L,int pos,int data)
{
	Node *n = NULL;
	LinkList p = L;
	int i = 1;
	if(!L || pos<1)
		return 1;     /*判断链表存在*/
	while(p && i<pos)  /*p指向需要插入的位置的前一个节点*/
	{
		p = p ->next;
		i++;
	}
	n = (Node*)malloc(sizeof(Node));  
	n -> data = data; 
	n -> next = p -> next;
	p -> next = n;
	return 0;
}
/*初始条件：链表L已经存在，且入参1<<pos<<length(L)*/

int deleteElement(LinkList L,int pos)
{
	LinkList p1 = L;
	LinkList p2 = L ->next;
	int i=1;
	if(pos<1 || pos>getLen(L))  /*如果删除位置不在范围内，则返回错误码1*/
		return 1;
	while(p2 && p2->next && i<pos)
	{
		p1 = p1 -> next;
		p2 = p2 -> next;
		i++;
	}
	p1 -> next = p2 -> next;
    free(p2);
	return 0;
}

/*释放链表节点（包括头结点）*/
void destroyLinkList(LinkList L)
{
	LinkList p = L;
	while(p)
	{
		L = L->next;
		free(p);
		p = L;
	}
}











































