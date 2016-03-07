#include <stdio.h>
#include <malloc.h>
#include "List.h"
typedef struct _tag_List{
	ListNode head;
	int length;
}TList;


//创建链表 
List* Create_List(){
	TList* list = (TList*)malloc(sizeof(TList));
	if(NULL != list)
	{
		list->head.next = NULL;
		list->length = 0;
		return list;
		
	}
}

//销毁链表 
void Destroy_List(List* list){
	if(list!=NULL)
		free(list);	
}
//清空元素
int Clear_List(List* list){
	TList* lis = (TList*)list;
	if(NULL!=lis)
	{
		lis->length = 0;
		lis->head.next = NULL;
	}
}
//获取当前元素个数
int Get_Length(List* list){
	int ret = -1;
	TList* lis = (TList*)list;
	if(NULL!=lis)
		return lis->length;			
}
//插入元素
int Insert_Element(List* list, ListNode *data, int pos){
	TList* lis = (TList*)list;
	ListNode* temp = (ListNode*)list;
	int i = 0;
	int ret = (NULL!=lis)&&(NULL!=data)&&(pos>=0)&&(pos<=lis->length);
	
	if(ret){

		for(i=0;(i<pos)&&(NULL!=temp->next);i++){
			temp = temp->next;
		}				
		data->next = temp->next;
		temp->next = data;
		lis->length ++;
	}
	return ret;	
		
}

//获取元素
ListNode* Get_Element(List* list, int pos){
	TList* lis = (TList*)list;
	ListNode* temp = (ListNode*)list;
	ListNode* ret = NULL;
	int i = 0;
	int flag = (NULL!=lis)&&(pos>=0)&&(pos<lis->length);
	if(flag){
		if(0==lis->length)
			return NULL;
		for(i=0;(i<pos)&&(NULL!=temp->next);i++){
			temp = temp->next;
		}	
		ret = temp->next;			
			
	}
	return ret;
}

//删除元素 
ListNode* Delete_Element(List* list, int pos){
	TList* lis = (TList*)list;
	ListNode* ret = NULL;
	int i = 0;
	if((NULL!=lis)&&(pos>=0)&&(pos<=lis->length)){
		ListNode* current = (ListNode*)list;
		ListNode* next = (ListNode*)list;		
		for(i=0; (i<pos)&&(NULL!=current->next);i++){
			current = current->next;		
		}
		next = current->next;
		ret = current->next;
		current->next = next->next;
		lis->length --;
	}
	return ret;
}








