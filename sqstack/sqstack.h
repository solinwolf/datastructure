



#ifndef __SQSTACK_H__
#define __SQSTACK_H__

typedef char Elemtype;
#define MAXSIZE 10
typedef int Status;
#define ERROR 0
#define OK    1

typedef struct{
	Elemtype data[MAXSIZE];
	int top;
}Sqstack;

Status InitSqtack(Sqstack *sqs);
Status GetTopElem(Sqstack *sqs,Elemtype *data);
Status SqPop(Sqstack *sqs,Elemtype *data);
Status SqPush(Sqstack *sqs,Elemtype *data);
int GetSqLengh(Sqstack *sqs);
Status ClearSqStack(Sqstack *sqs);
Status SqstackEmpty(Sqstack *sqs);
Status StackTraverse(Sqstack sqs);

#endif