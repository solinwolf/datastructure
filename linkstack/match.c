#include "linkstack.h"


 
Status match(char *str)
{
	LinkStack sqs;
	InitLinkStack(&sqs);
	Elemtype *tmp = str;
	Elemtype tmpdata;
	while(*tmp!='\0')
	{
		if(*tmp == '(')
			LinkStackPush(&sqs,*tmp);
		else if(*tmp == ')')
		{
			if(LinkStackEmpty(sqs))
				return ERROR;
			LinkStackPop(&sqs,&tmpdata);
		}
		tmp++;
	}
	if(LinkStackEmpty(sqs))
		return OK;
	else	
		return ERROR;	
}

