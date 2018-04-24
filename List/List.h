#ifndef __LIST_H__
#define __LIST_H__

typedef  void List;
typedef struct _tag_ListNode ListNode; 
struct _tag_ListNode {
	ListNode *next;	
};

//创建 链表 
List* Create_List();
//销毁链表 
void Destroy_List(List* list);

//清空元素
int Clear_List(List* list);
 
//插入元素
int Insert_Element(List* list, ListNode *data, int pos);

//获取元素
ListNode* Get_Element(List* list, int pos);
//删除元素 
ListNode* Delete_Element(List* list, int pos);
//获取当前元素个数
int Get_Length(List* list);


#endif 


