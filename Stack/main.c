#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "match.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *buff = "#include <stdio.h> int main() { int a[5][5]; int (*p)[4]; p = a[0]; printf(\"%d\\n\", &p[3][3] - &a[3][3]); return 0;}";
int main(int argc, char *argv[]) {


	int flag = -1;
	flag = match(buff);
	if(1==flag)
		printf("Matched!\n");
	else if(0==flag)
		printf("Unmatched!\n");	
	else
		printf("Error!\n");	

	return 0;
}







