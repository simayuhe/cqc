#include <iostream>
#include "intSLLST.h"

IntSLList::~IntSLList(){
	//��������
	for (IntSLLNode *p; !isEmpty();)
	{
		p = head->next;//����ÿһ���ڵ�
		delete head;//��ɾ����
		head = p;//ֱ���ýڵ�Ϊ��Ϊֹ
	}
}
void IntSLList::addToHead(int el)
{
	head = new IntSLLNode(el, head);
	if (tail == 0)
		tail = head;//��β�������ֵ���䣬���û��ֵ����Ҫ�Ѹռӵ�������Ϊ��β�������ʱ����ָ��ָ��ͬһ��node
}

void IntSLList::addToTail(int el)
{
	if (tail != 0)
	{
		tail->next = new IntSLLNode(el);//��ǰβ���ڵ��nextָ��
		tail = tail->next;//�趨�µ�β��ָ��
	}
	else
	{
		head = tail = new IntSLLNode(el);//ԭ��Ϊ�������ˣ�����ֻ��һ���ڵ㣬����ֻ�����ڵ����ݣ��ڵ��nextָ��Ϊ0
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
		for (tmp = head; tmp->next != tail; tmp = tmp->next);//��ָ���ƶ���tail��ǰһ��
		delete tail;
		tail = tmp;
		tail->next = 0;
	}
	return el;
}
void IntSLList::deleteNode(int el)
{//��������ڵ㣬������ɾ������Ȼ���ǰ���ͺ��������������̺���next���ǣ���ǰ����Ҫ���Ᵽ��
	if (head != 0)//��֤�����ִӿ�������ɾ���ڵ�����
	{
		if (head == tail && el == head->info)
		{//ֻ��һ���ڵ㣬�Ҿ���Ҫɾ���Ǹ�
			delete head;
			head = tail = 0;
		}
		else
		{//�����ֹһ���ڵ㣬�Ǿʹ�ͷ��ʼ�ж�
			if (el == head->info)
			{
				IntSLLNode *tmp = head;
				head = head->next;
				delete tmp;
			}
			else{
				IntSLLNode *pred, *temp;//pred��ָ��ǰ���ڵ��ָ�룬tempָ��ǰ�ڵ㣬temp->next ָ���̽ڵ�
				for (pred = head, temp = head->next; temp != 0 && !(temp->info == el); pred = pred->next, temp = temp->next);
				//���for��һ���ƶ����ҵĹ��̣���ֹ�����ǣ�Ҫô�ҵ��˽�β��Ҫô�ҵ���Ҫ�ҵ�ֵtemp->info == el
				if (temp != 0)
				{
					pred->next = temp->next;//�� ǰ��=���
					if (temp == tail)
					{
							tail = pred;//���Ҫɾ���Ľڵ���β������ô����ǰ�������µ�β���ڵ���
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