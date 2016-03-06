#include <stdio.h>
#include <stdlib.h>
#include "List.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct _tag_data{
	ListNode node;
	int dat;
}Data;

int main(int argc, char *argv[]) {
	Data d1;
	Data d2;
	Data d3;
	int i=0;
	d1.dat = 10;
	d2.dat = 20;
	d3.dat = 30;
	List* list = Create_List();
//	printf("Value of pointer area of  element %x\n", Get_Element( list, Get_Length(list))->next);
	printf("length of list is: %d\n",Get_Length(list));
	Insert_Element(list, (ListNode*)&d2, 0);
	printf("Value of pointer area of  element %x\n", Get_Element( list, Get_Length(list)-1)->next);
	Insert_Element(list, (ListNode*)&d1, 0);
	printf("Value of pointer area of  element %x\n", Get_Element( list, Get_Length(list)-1)->next);
	Insert_Element(list, (ListNode*)&d3, 0);
	printf("Value of pointer area of  element %x\n", Get_Element( list, Get_Length(list)-1)->next);
	printf("length of list is: %d\n",Get_Length(list));
	for(i=0;i<Get_Length(list);i++)
	{
		printf("Element No %d of list is:%d\n",i, ((Data*)Get_Element(list,i))->dat);
	}
/*
	Delete_Element(list,1);
	Delete_Element(list,1);
	Delete_Element(list,0);	
	printf("length of list is: %d\n",Get_Length(list)); 	
	prin = (Data*)Get_Element(list, 0);
	printf("Address of prin is %1x\n",prin);
//	printf("Element of list is %d\n",prin->dat);	
*/
	Destroy_List(list);
	return 0;
}
