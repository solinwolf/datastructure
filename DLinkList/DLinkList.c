
#include "DLinkList.h"
#include <malloc.h>
#include <stdio.h>
typedef struct _Tag_DLinkList{
	DLinkListNode header;
	int length;
}TDLinkList;

DLinkList* createDLinkList(){
	TDLinkList* ret = (TDLinkList*)malloc(sizeof(TDLinkList));
	if(NULL!=ret){	
		ret->header.next = NULL;
		ret->length = 0;
	}
	return ret;
}


void destroyDLinkList(DLinkList* dlinklist){
	if(NULL!=dlinklist)
		free(dlinklist);
}

void clearDLinkList(DLinkList* dlinklist){
	if(NULL!=dlinklist){
		((TDLinkList*)dlinklist)->header.next = NULL;
		((TDLinkList*)dlinklist)->length = 0;
	}
}

DLinkListNode* getElement(DLinkList* dlinklist, int pos){
	TDLinkList* slinklist = (TDLinkList*)dlinklist;
	DLinkListNode* ret = NULL;
	int i=0;
	if((NULL!=slinklist)&&(pos>=0)){
		DLinkListNode* current = (DLinkListNode*)dlinklist;
		for(i=0;(i<pos)&&(NULL!=current->next);i++){
			current = current->next;
		}
		ret = current->next;
	}	
	return ret;
}


int  insertElement(DLinkList* dlinklist, DLinkListNode* node, int pos){
	TDLinkList* slinklist = (TDLinkList*)dlinklist;
	int ret = (NULL!=slinklist)&&(NULL!=node)&&(pos>=0);
	int i = 0;
	if(ret){
		DLinkListNode* current = (DLinkListNode*)dlinklist;
		for(i=0;(i<pos)&&(NULL!=current->next);i++){
			current = current->next;
		}
		node->next = current->next;
		current->next = node;
		if(0==slinklist->length){
			node->next = node;
		}
		if(0==pos){
		for(i=0;i<=slinklist->length;i++){
			current = current->next;
		}		
		current->next = node;	
		}
		slinklist->length ++;
	}
	return ret;
}
DLinkListNode* deleteElement(DLinkList* dlinklist, int pos){
	TDLinkList* slinklist = (TDLinkList*)dlinklist;
	DLinkListNode* ret = NULL;
	int i=0;
	if((NULL!=slinklist)&&(pos>=0)){
		DLinkListNode* current = (DLinkListNode*)slinklist;
		DLinkListNode* next = (DLinkListNode*)slinklist;
		for(i=0;(i<pos)&&(NULL!=current->next);i++){
			current = current->next;
		}
		next = current->next;
		ret = current->next;
		current->next = next->next;
		slinklist->length --;
	}
	return ret;
}
int getLength(DLinkList* dlinklist){
	int ret = -1;
	if(NULL!=dlinklist){
		ret = ((TDLinkList*)dlinklist)->length;
	}
	return ret;
}





