#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode{//构造一个节点类，存储info 和下一个几点的指针
public :
	int info;
	IntSLLNode* next;
	IntSLLNode(int el, IntSLLNode *ptr = 0){
		info = el; next = ptr;
	}//使用构造函数对节点进行初始化
};

class IntSLList{//用来对链表进行外部操作
public:
	IntSLList(){
		head = tail = 0;
	}
	~IntSLList();
	int isEmpty(){ return head == 0; }
	void addToHead(int);//在表头加入数据点
	void addToTail(int);//在表尾部加入数据
	int deleteFromHead();//删除头部节点，
	int deleteFromTail();
	void deleteNode(int);//删掉具有某一指定值的节点
	bool isInList(int el);

private://这里要求对指针的操作是对外不可见的，也就是要形成一种假象：我们只管加入数据即可
	IntSLLNode *head, *tail;//两个指向IntSLLNode的指针
};
#endif