#ifndef __DLINKLIST_H__
#define __DLINKLIST_H__


typedef  void   DLinkList;
typedef  struct _Tag_DLinkListNode  DLinkListNode;
struct  _Tag_DLinkListNode{
	DLinkListNode* next;
};

DLinkList* createDLinkList();
void destroyDLinkList(DLinkList* dlinklist);
void clearDLinkList(DLinkList* dlinklist);
DLinkListNode* getElement(DLinkList* dlinklist, int pos);
int  insertElement(DLinkList* dlinklist, DLinkListNode* node, int pos);
DLinkListNode* deleteElement(DLinkList* dlinklist, int pos);
int getLength(DLinkList* dlinklist);

#endif


