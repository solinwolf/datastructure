#ifndef __STACK_H__
#define __STACK_H__
typedef void Stack;
typedef struct _Tag_StackNode StackNode;
struct _Tag_StackNode{
	StackNode *next;
};

Stack* Create_Stack();
int Destroy_Stack(Stack *s);
int Get_Length(Stack *s);
int Push(Stack *s, StackNode *node);
StackNode* Pop(Stack *s);
StackNode* Top(Stack *s);

#endif



