

#include <stdio.h>
#include "linkstack.h"


int main(int argc,char *argv[])
{
	/*LinkStack ls=NULL;
	InitLinkStack(&ls);
	printf("len = %d\n",GetLengh(ls));
	if(LinkStackEmpty(ls))
		printf("LinkStack is Empty\n");
	else	
		printf("LinkStack is NOT Empty\n");
	int i = 0;
	int tmp = -1;
	for(i=0;i<10;i++)
		LinkStackPush(&ls,i);
	if(LinkStackEmpty(ls))
		printf("LinkStack is Empty\n");
	else	
		printf("LinkStack is NOT Empty\n");
	for(i=0;i<10;i++)
	{
		LinkStackPop(&ls,&tmp);
		printf("top = %d\n",tmp);
	}
	if(LinkStackEmpty(ls))
		printf("LinkStack is Empty\n");
	else	
		printf("LinkStack is NOT Empty\n");
	DestroyLinkStack(&ls);
	printf("len = %d\n",GetLengh(ls));
	if(LinkStackEmpty(ls))
		printf("LinkStack is Empty\n");
	else	
		printf("LinkStack is NOT Empty\n");*/
	
	char *str = "int main(int argc,char **argv){return 0;}";
	if(match(str)==OK)
		printf("Matched\n");
	else
		printf("Unmatched\n");
	return 0;
}