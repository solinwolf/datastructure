

#include <malloc.h>
#include "linkstack.h"

Status InitLinkStack(LinkStack *ls)
{
	if(NULL==ls)
		return ERROR;
	LinkStack tmp = (LinkStack)malloc(sizeof(Node));
//	printf("%x\n",tmp);
	if(tmp)
	{
		tmp->next = NULL;
		*ls = tmp;
	}
	return OK;
}

Status LinkStackPush(LinkStack *ls,Elemtype data)
{
	Node *tmp = (Node*)malloc(sizeof(Node));
	if(NULL == *ls || NULL == tmp)
		return ERROR;
	tmp->data = data;
	tmp->next = *ls;
	*ls = tmp;
	return OK;
}
Status LinkStackPop(LinkStack *ls,Elemtype *data)
{
	Node *tmp = *ls;
	if(NULL == (*ls) || NULL == tmp || NULL == (*ls)->next)
		return ERROR;
	*data = (*ls)->data;
	(*ls)  = tmp->next;
	free(tmp);
	return OK;
}
Status DestroyLinkStack(LinkStack *ls)
{
	LinkStack tmp = *ls;
	if(NULL==ls)
		return ERROR;
	while(*ls)
	{
		tmp = *ls;
		*ls = (*ls)->next;
		free(tmp);
	}
	return OK;
}

int GetLengh(LinkStack ls)
{
	int len = 0;
	while(ls && ls->next)
	{
		ls = ls->next;
		len++;
	}
	return len;
}

Status LinkStackEmpty(LinkStack ls)
{
	if(NULL==ls)
		return OK;
	if(!(ls->next))
		return OK;
	else
		return ERROR;
}

















