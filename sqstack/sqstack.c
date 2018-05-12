

#include "sqstack.h"
#include <stdio.h>
Status InitSqtack(Sqstack *sqs)
{
	if(NULL==sqs)
		return ERROR;
	sqs->top = -1;
	return OK;
}

Status VisitSqstack(Sqstack *sqs)
{
	int i=0;
	if(NULL==sqs)
		return ERROR;
	while(i <= sqs->top)
	{
		printf("Elem in position[%d] = %d\n",i,sqs->data[i])
		i++;
	}
	return OK;
	
}
Status GetTopElem(Sqstack *sqs,Elemtype *data)
{
	if(NULL == sqs || NULL == data)
		return ERROR;
	if(sqs->top == -1)
		return ERROR;
	*data = sqs -> data[sqs->top];
	return OK;
}

Status SqPop(Sqstack *sqs,Elemtype *data)
{
	if(NULL == sqs || NULL == data)
		return ERROR;
	if(sqs->top == -1)
		return ERROR;
	*data = sqs -> data[sqs->top];
	(sqs->top)--;
	return OK;
}
Status SqPush(Sqstack *sqs,Elemtype *data)
{
	if(NULL == sqs || NULL == data)
		return ERROR;
	(sqs->top)++;
	if(sqs->top == MAXSIZE)
		return ERROR;
	sqs->data[sqs->top] = *data;
	return OK;
}

int GetSqLengh(Sqstack *sqs)
{
	if(NULL == sqs)
		return -1;
	return sqs->top + 1;
}

Status ClearSqStack(Sqstack *sqs)
{
	if(NULL == sqs)
		return ERROR;
	sqs -> top = -1;
	return OK;
}
Status SqstackEmpty(Sqstack *sqs)
{
	if(NULL==sqs)
		return ERROR;
	if(sqs->top == -1)
		return OK;
	else 
		return ERROR;
}

Status StackTraverse(Sqstack sqs);

