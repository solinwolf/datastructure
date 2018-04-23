#include <stdio.h>
#include "linklist.h"
int main(int argc,char* argv)
{
	int len = 0;
	int count = 0;
	LinkList list;
    createLinkList(&list,len);
    printf("Created LinkList\n");
	printf("Printing element...\n");
	for(count=0;count<len;count++)
		printf("Element %d = %d\n",count,(getElement(&list,count))->data);
    return 0;
}


