#include "sqstack.h"


 
Status match(char *str)
{
	int len = strlen(str);
	Sqstack sqs;
	InitSqtack(&sqs);
	Elemtype *tmp = str;
	Elemtype tmpdata;
	while(*tmp!='\0')
	{
		if(*tmp == '(')
			SqPush(&sqs,tmp);
		else if(*tmp == ')')
		{
			if(SqstackEmpty(&sqs))
				return ERROR;
			SqPop(&sqs,&tmpdata);
		}
		tmp++;
	}
	if(SqstackEmpty(&sqs))
		return OK;
	else	
		return ERROR;	
}

