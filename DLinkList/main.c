#include <stdio.h>
#include <stdlib.h>
#include "Dlinklist.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct _Tag_Data{
	DLinkListNode ptr;
	int data;
}Data;

int main(int argc, char *argv[]) {
	Data dat[5];
	int i=0;
	for(i=0;i<5;i++){
		dat[i].data = i+1;
	}
	DLinkList* dlinklist = createDLinkList();
/*	for(i=0;i<5;i++){
		insertElement(dlinklist, (DLinkListNode*)&dat[i], getLength(dlinklist));
	}
*/
	insertElement(dlinklist, (DLinkListNode*)&dat[0], 0);
	insertElement(dlinklist, (DLinkListNode*)&dat[1], 0);
	insertElement(dlinklist, (DLinkListNode*)&dat[2], 1);
	insertElement(dlinklist, (DLinkListNode*)&dat[3], 1);
	insertElement(dlinklist, (DLinkListNode*)&dat[4], 2);
	printf("Length = %d\n", getLength(dlinklist));
	for(i=0;i<getLength(dlinklist)*4-1;i++){
		printf("Element %d\n", ((Data*)getElement(dlinklist, i))->data);
	}
	destroyDLinkList(dlinklist);
	return 0;
}
