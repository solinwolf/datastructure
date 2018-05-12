#include <stdio.h>
#include "sqstack.h"
#include <string.h>


int main(int argc,char *argv[])
{
	char *str = "int mainint argc,char **argv{return 0;}";
	/*Sqstack sqs;
	int i=0;
	InitSqtack(&sqs);
	Elemtype tmpdata = 0;
	printf("Lengh of stack = %d\n",GetSqLengh(&sqs));
	for(i=0;i<MAXSIZE;i++)
		SqPush(&sqs,&i);
	printf("Lengh of stack = %d\n",GetSqLengh(&sqs));
	ClearSqStack(&sqs);
	while(GetSqLengh(&sqs))
	{
		SqPop(&sqs,&tmpdata);
		printf("Elem of top = %d\n",tmpdata);
	}
	printf("Lengh of stack = %d\n",GetSqLengh(&sqs));
	*/
	if(match(str)==OK)
		printf("Matched\n");
	else
		printf("Unmatched\n");
	return 0;
}
