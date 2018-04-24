#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ARRAYSIZE(array,elementType)   sizeof(array)/sizeof(elementType)  

int main(int argc, char *argv[]) {
/*	int testArray[] = {3,7,1,0,4,10,8,20,90,78,54,11,97};
	insertSort(testArray,ARRAYSIZE(testArray,int));
	int i=0;
	for(i=0;i<ARRAYSIZE(testArray,int);i++)
		printf("%d\n", testArray[i]);
	return 0;*/
	
	int n;
	for(n=3;n<=10;n++)
	{
		if(n%6==0)
			break;
		printf("%d",n);
		
	}
	
}
