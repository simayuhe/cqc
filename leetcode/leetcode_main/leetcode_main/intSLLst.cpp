#include <iostream>
#include "intSLLST.h"

IntSLList::~IntSLList(){
	//析构函数
	for (IntSLLNode *p; !isEmpty();)
	{
		p = head->next;//遍历每一个节点
		delete head;//并删除它
		head = p;//直到该节点为空为止
	}
}
void IntSLList::addToHead(int el)
{
	head = new IntSLLNode(el, head);
	if (tail == 0)
		tail = head;//表尾部如果有值不变，如果没有值，就要把刚加的数据作为表尾部，则此时两个指针指向同一个node
}

void IntSLList::addToTail(int el)
{
	if (tail != 0)
	{
		tail->next = new IntSLLNode(el);//当前尾部节点的next指向
		tail = tail->next;//设定新的尾部指针
	}
	else
	{
		head = tail = new IntSLLNode(el);//原先为空链表了，现在只有一个节点，这里只给定节点数据，节点的next指针为0
	}
}
int IntSLList::deleteFromHead()
{
	int el = head->info;
	IntSLLNode *tmp = head;
	if (head == tail)
		head = tail = 0;
	else
		head = head->next;
	delete tmp;
	return el;
}
int IntSLList::deleteFromTail()
{
	int el = tail->info;
	if (head == tail)
	{
		delete head;
		head = tail = 0;
	}
	else
	{
		IntSLLNode *tmp;
		for (tmp = head; tmp->next != tail; tmp = tmp->next);//将指针移动到tail的前一个
		delete tail;
		tail = tmp;
		tail->next = 0;
	}
	return el;
}
void IntSLList::deleteNode(int el)
{//查找任意节点，并把它删除掉，然后把前驱和后继链接起来，后继好找next即是，但前驱需要另外保存
	if (head != 0)//保证不出现从空链表中删除节点的情况
	{
		if (head == tail && el == head->info)
		{//只有一个节点，且就是要删的那个
			delete head;
			head = tail = 0;
		}
		else
		{//如果不止一个节点，那就从头开始判断
			if (el == head->info)
			{
				IntSLLNode *tmp = head;
				head = head->next;
				delete tmp;
			}
			else{
				IntSLLNode *pred, *temp;//pred是指向前驱节点的指针，temp指向当前节点，temp->next 指向后继节点
				for (pred = head, temp = head->next; temp != 0 && !(temp->info == el); pred = pred->next, temp = temp->next);
				//这个for是一个移动查找的过程，终止条件是：要么找到了结尾，要么找到了要找的值temp->info == el
				if (temp != 0)
				{
					pred->next = temp->next;//令 前驱=后继
					if (temp == tail)
					{
							tail = pred;//如果要删除的节点在尾部，那么他的前驱就是新的尾部节点了
					}
					delete temp;
				}
				
			}
		}

	}
}
bool IntSLList::isInList(int el)
{
	IntSLLNode *temp;
	for (temp = head; temp != 0 && !(temp->info == el); temp = temp->next);
	return temp != 0;
}