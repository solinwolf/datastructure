



#include "stack.h"
#include "match.h"
#include "malloc.h"
#define  Matched      1
#define  Unmatched    0
 
int match(char* buff)
{
	Stack *stack = Create_Stack(); 
	int i = 0;
	int ret = -1;
	while('\0'!=buff[i]){	
		Data *d = (Data*)malloc(sizeof(Data));
		d->data = buff[i];
		if('{'==d->data)
			Push(stack,(StackNode*)d);
		else if('}'==d->data)
		{
			if(0==Get_Length(stack))
				return 0;
			else
				Pop(stack);   		
		}
		i++;
	}
	if(0==Get_Length(stack))
		ret = Matched;
	else 
		ret = Unmatched;
	Destroy_Stack(stack);	
	return ret;
}





