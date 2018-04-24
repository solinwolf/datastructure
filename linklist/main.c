#include <stdio.h>
#include "linklist.h"
int main(int argc,char* argv)
{
	int len = 4;
	int count = 0;
	LinkList list;  //定义头指针
	printf("Creating LinkList...\n");
	
    createLinkList(&list,len); //创建一个有len个节点的带有头结点的链表，且头指针指向头结点，无论节点数为多少，头结点不为空
	for(count=1;count<=getLen(list);count++)
		printf("Element %d is %d\n",count,getElement(list,count)->data);
	printf("Now length of LinkList is %d\n",getLen(list));
	
	
	insertElement(list,4,100);
	for(count=1;count<=getLen(list);count++)
		printf("Element %d is %d\n",count,getElement(list,count)->data);
	printf("Now length of LinkList is %d\n",getLen(list));
	
	deleteElement(list,4);
	for(count=1;count<=getLen(list);count++)
		printf("Element %d is %d\n",count,getElement(list,count)->data);
	printf("Now length of LinkList is %d\n",getLen(list));
	printf("Destroying LinkList...\n");
	destroyLinkList(list);
	
    return 0;
}



