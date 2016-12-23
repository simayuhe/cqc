#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode{//����һ���ڵ��࣬�洢info ����һ�������ָ��
public :
	int info;
	IntSLLNode* next;
	IntSLLNode(int el, IntSLLNode *ptr = 0){
		info = el; next = ptr;
	}//ʹ�ù��캯���Խڵ���г�ʼ��
};

class IntSLList{//��������������ⲿ����
public:
	IntSLList(){
		head = tail = 0;
	}
	~IntSLList();
	int isEmpty(){ return head == 0; }
	void addToHead(int);//�ڱ�ͷ�������ݵ�
	void addToTail(int);//�ڱ�β����������
	int deleteFromHead();//ɾ��ͷ���ڵ㣬
	int deleteFromTail();
	void deleteNode(int);//ɾ������ĳһָ��ֵ�Ľڵ�
	bool isInList(int el);

private://����Ҫ���ָ��Ĳ����Ƕ��ⲻ�ɼ��ģ�Ҳ����Ҫ�γ�һ�ּ�������ֻ�ܼ������ݼ���
	IntSLLNode *head, *tail;//����ָ��IntSLLNode��ָ��
};
#endif