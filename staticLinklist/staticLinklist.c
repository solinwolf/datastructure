#include <stdio.h>
#include <malloc.h>
#include "staticLinklist.h"

Status InitStaticLinkList(StaticLinklist SLL)
{
	Status ret = 0;
	int i=0;
	for(i=0;i<MAX_SIZE-1;i++)
	{
		SLL[i].cur = i+1;
	}
	SLL[MAX_SIZE-1].cur = 0;
	return ret;
}

int Malloc_SLL(StaticLinklist SLL)
{
	int ret = SLL[0].cur;
	if(SLL[0].cur)
		SLL[0].cur = SLL[ret].cur;
	return ret;
}

int GetLengh(StaticLinklist SLL)
{
	int len = 0;
	int i = SLL[MAX_SIZE-1].cur;
	while(i)
	{
		i = SLL[i].cur;
		len++;
	}
	return len;
}

Status InsertStaticElement(StaticLinklist SLL,int pos,Elemtype data)
{
	int j = 0;
	int i = 1;
	int k = MAX_SIZE-1;
	if((pos<1) || (pos > GetLengh(SLL)+1) || (GetLengh(SLL)==MAX_SIZE-2))
		return ERROR;
	j = Malloc_SLL(SLL);
	if(j)
	{
		SLL[j].data = data;
		for(i=1;i<=pos-1;i++)
			k = SLL[k].cur;
		SLL[j].cur = SLL[k].cur;
		SLL[k].cur = j;
		return OK;
	}
	return ERROR;
}
Status GetElem(StaticLinklist SLL,int pos,Elemtype *ret)
{
	Status res = (pos<1)&&(pos<GetLengh(SLL));
	if(res == ERROR)
		return ERROR;
	*ret = SLL[pos].data;
	return OK;
}

int main(int argc,char* arcv[])
{
	StaticLinklist sll;
	int i = 0;
	Elemtype data = -1;
	InitStaticLinkList(sll);
	for(i=1;i<=5;i++)
		InsertStaticElement(sll,1,i);
	printf("Lengh of sll = %d\n",GetLengh(sll));
	for(i=1;i<=GetLengh(sll);i++)
	{
		GetElem(sll,i,&data);
		printf("data of elem[%d]  = %d,cur = %d\n",i,data,sll[i].cur);
	}
	printf("\n");
	InsertStaticElement(sll,1,100);
	printf("Lengh of sll = %d\n",GetLengh(sll));
	for(i=1;i<=GetLengh(sll);i++)
	{
		GetElem(sll,i,&data);
		printf("data of elem[%d]  = %d,cur = %d\n",i,data,sll[i].cur);
	}
	//printf("Status = %d\n",GetElem(sll,1,&data));
	return 0;
	
}

