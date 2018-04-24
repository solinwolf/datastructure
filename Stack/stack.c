
#include "stack.h"
#include "malloc.h"
#include <stdio.h>

typedef struct _Tag_TStack{
	StackNode header;
	int length;
}TStack;


Stack* Create_Stack(){
	TStack* ret = (TStack*)malloc(sizeof(TStack));
	if(NULL!=ret)
	{
		ret->header.next = NULL;
		ret->length = 0;	
	}	
	return ret;
}
int Destroy_Stack(Stack *S){
	if(NULL!=S)
		free(S);
}
int Get_Length(Stack *S){
	TStack* s = (TStack*)S;
	if(NULL!=s)
		return s->length;	
}
int Push(Stack *S, StackNode *node){
	TStack *s = (TStack*)S;
	int ret = (NULL!=s)&&(NULL!=node);
	if(ret){
		node->next = s->header.next;
		s->header.next = node;
		s->length ++;		
	}
	return ret;
	
}
StackNode* Pop(Stack *S){
	TStack *s = (TStack*)S;
	StackNode *ret = NULL;
	if((NULL != s)&&(0 != s->length)){
		ret = s->header.next;
		s->header.next = ret->next;
		s->length --;		
	}
	return ret;	
}
StackNode* Top(Stack *S){
	TStack *s = (TStack*)S;
	StackNode *ret = NULL;
	if((NULL != s)&&(0 != s->length)){
		ret = s->header.next;	 
	}
	return ret;	
}














