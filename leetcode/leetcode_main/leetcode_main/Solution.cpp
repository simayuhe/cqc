#include "Solution.h"


Solution::Solution()
{
}


Solution::~Solution()
{
}



vector<int> Solution::twoSum(vector<int> & nums, int & target)
{
	vector<int> index;
	/*for each (int num_i in nums)
	{
		new_nums.push_back(num_i + target);
	}*/
	//for (int i = 0; i < nums.size(); i++)
	//{
	//	for (int j = i + 1; j < nums.size(); j++)
	//	{
	//		if (nums.at(i) + nums.at(j) == target)
	//		{
	//			index.push_back(i);
	//			index.push_back(j);
	//			return index;
	//		}
	//	}
	//}
	
		// ����Map����Hash��
		map<int, int> Hash;
		for (int i = 0; i < nums.size(); i++) {
			Hash[nums[i]] = i;
		}
		// ����ö�ٵ�һ������
		vector<int> ans(2);
		for (int i = 0; i < nums.size(); i++) {
			// �����ڶ�Ӧ�ļ���������������������Լ�ʱ�����ҵ���һ���
			if (Hash.find(target - nums[i]) != Hash.end() && Hash[target - nums[i]] != i) {
				ans[0] = i;//ans[0] = i + 1;
				ans[1] = Hash[target - nums[i]] ;//ans[1] = Hash[target - nums[i]] + 1;
				// ��һ���һ��������ans[0] < ans[1]��
				break;
			}
		}
		// ���ش�
		return ans;

}

string  Solution::zigzag(string & s, int & numRows)
{
	string new_s;
	if (numRows == 1)
	{
		new_s = s;
		return new_s;
	}
	int size_group = 2 * numRows - 2;
	vector<vector<char>> array_group;
	vector<char> array_group_i;
	for (string::iterator idx_string = s.begin(); idx_string != s.end(); idx_string++)
	{
		array_group_i.push_back(*idx_string);
		if (array_group_i.size() == size_group)
		{
			array_group.push_back(array_group_i);
			array_group_i.clear();
		}	
	}
	if (array_group_i.size() != 0)
	{
		array_group.push_back(array_group_i);//�������û���ж������һ������ݵ��º����ȡδ��ֵ������Ԫ��
	}
	//the fist line
		for (vector<vector<char>>::iterator idx_group = array_group.begin(); idx_group != array_group.end(); idx_group++)
		{
			new_s.push_back((*idx_group).at(0));
		}
		//except the last line
		for (int i = 1; i < numRows - 1; i++)
		{
			for (vector<vector<char>>::iterator idx_group = array_group.begin(); idx_group != array_group.end(); idx_group++)
			{
				if ((*idx_group).size()>i)
				{
					new_s.push_back((*idx_group).at(i));
					if ((*idx_group).size() > (size_group - i ))
					{		
						new_s.push_back((*idx_group).at(size_group - i));
					}
			
				}

			}
		}
		//the last line
		for (vector<vector<char>>::iterator idx_group = array_group.begin(); idx_group != array_group.end(); idx_group++)
		{
			if ((*idx_group).size()>(numRows - 1))
			{
				new_s.push_back((*idx_group).at(numRows - 1));

			}

		}
 
		return new_s;
	
}

int  Solution::Reverse_Integer(int & x)
{
	int result{ 0 };//
	const int max = 0x7fffffff;
	const int min = 0x80000000;
	long long temp{0};
	while (x != 0)
	{
		temp= temp*10 + x%10;
		x = x / 10;
		if (temp > max|| temp < min)
		{
			return result;
		}
	}
	result = temp;
	return result;
}

int Solution::myAtoi(string & str)
{
	long long  result{ 0 };
	int n{ 0 };//λ��
	int sign{ 1 }, p_n_flag{ 0 }, zero_flag{0};
	for (string::iterator s_i = str.begin(); s_i != str.end(); s_i++)
	{
		if (*s_i == '-')
		{
			if (p_n_flag==0)
			{
				p_n_flag = 1;
				sign = -1;
				continue;
			}
			else
			{
				sign = 0;//����������α���Ϊ�ǷǷ�����
				break;
			}
		}
		if (*s_i == '+')
		{
			if (p_n_flag == 0)
			{
				p_n_flag = 1;
				sign = 1;
				continue;
			}
			else
			{
				sign = 0;
				break;
			}
		}
		if (*s_i == ' ')
		{ 
			if (n == 0 && zero_flag == 0 && p_n_flag==0)
			{ continue; }
			else
			{break;}
		}
		if (*s_i == '0')
		{
			zero_flag = 1;
			if (n == 0)
			{continue;}
			else
			{
				n = n + 1;
				result = result * 10;
				if (result > INT_MAX)
				{

					switch (sign)
					{
					case 0:return 0;
					case 1:return INT_MAX;
					case -1:return INT_MIN;
					default:
						break;
					}
				}
				else
				{continue;}
				
			}
		}
		if ((*s_i) > '0' && ((*s_i) < '9' || (*s_i) == '9'))
		{
			n = n + 1;
			//result = result * 10 + ((*s_i) - 48);
			result = result * 10 + ((*s_i) - '0');//���һ�������ﲻ����ʽ��ֵ48 �����á�0��
			cout << result << endl;
			if (result > INT_MAX)
			{
				
				switch (sign)
				{
				case 0:return 0;
				case 1:return INT_MAX;
				case -1:return INT_MIN;
				default:
					break;
				}
			}
		}
		else
		{
			break;
		}

		
	}
	result = result*sign;
	
	return result;
}

bool Solution::isPalindrome(int & x)
{
	//�����м�λ
	bool flag{ 1 };
	if (x < 0)
	{
		flag = 0;
		return flag;
	}
	int n = 0;
	int t_x = x;
	while (t_x)
	{
		t_x = t_x / 10;
		n++;
	}
	//�ж���λ��ĩλ�Ƿ���ȣ�������flag=0����
	while (n>1)
	{
		int t = pow(10, n - 1);//���λ
		if ((x % 10) == (x / t))
		{
			x = x % t;
			x = x / 10;
		}
		else
		{
			flag = 0;
			break;
		}
		n = n - 2;
	}
	return flag;
	
}

int Solution::romanToInt(string s)
{
	//��������ұ�
	map<char, int> M;
	int trans_ans{ 0 };
	M['I'] = 1; M['V'] = 5; M['X'] = 10; M['L'] = 50; M['C'] = 100; M['D'] = 500; M['M'] = 1000;
	//���ζ�ȡÿ���ַ�
	if (s.size() == 0)
		return trans_ans;
	trans_ans = M[s.front()];
	for (string::iterator s_i = s.begin()+1; s_i != s.end(); s_i++)
	{
		if (M[*s_i] > M[*(s_i - 1)])
		{
			trans_ans = trans_ans - 2 * M[*(s_i - 1)] + M[*s_i];
		}
		else
		{
			trans_ans = trans_ans  + M[*s_i];
		}
	}
	return trans_ans;
}

string Solution::longestCommonPrefix(vector<string>& strs)
{
	if (strs.size() == 0)
	{
		return "";
	}
	int n{int(strs.front().size())};
	if (n == 0)
	{
		return "";
	}
	for (vector<string>::iterator str_i = strs.begin()+1; str_i != strs.end(); str_i++)
	{
		if ((*str_i).size() < n)
		{
			n = (*str_i).size();
		}
		int temp{n};//�о��е������
		for (int i = 0; i < n; i++)
		{
			if ((*str_i).at(i) != (*(str_i - 1)).at(i))
			{
				temp = i;
				break;
			}
		}
		n = temp;
	}

	string longest_prefix(strs.front(),0,n);
	return longest_prefix;
}

ListNode * Solution::removeNthFromEnd(ListNode* head, int n)
{
	int i{ 1 };
	ListNode *temp,*fronter ,*backer,*curNode;
	temp = head;
	//fronter�ӵ�һ���ڵ㿪ʼ����ƶ���ֱ����n�������ߵ��˽�β
	for (fronter = temp; i < n && !(fronter->next==NULL); fronter = fronter->next,i++);//(*fronter).next)
	if (fronter->next == NULL)//�������Ϊ���˽�β��������ѭ������ô˵��Ҫɾ���ĵ���head
	{
		ListNode *tmp = head;
		if (head->next==NULL)//��������ֻ��һ���ڵ�
			head= 0;
		else
			head = head->next;
		return head;
	}
	//�������Ϊfornter�Ѿ���ȥn���ˣ���ô���ʱ���backer��ֵ
	curNode = head;
	//����ͬʱ������������ֱ��fronter�ߵ���βʱ��ɾ��backer֮����Ǹ��ڵ�
	for (; fronter->next != NULL; fronter = fronter->next){
		
		backer=curNode;
		curNode = curNode->next;
	}
	//ɾ��backer����Ľڵ�
	backer->next = curNode->next;
	return head;
}

bool Solution::isValid(string s)
{
	bool flag{ 0 };
	if (s.size() == 0)
	{
		return flag = 1;
	}
	map<char, char> side;
	side['('] = 'l';side['{'] = 'l';side['['] = 'l';side[')'] = 'r';side['}'] = 'r';side[']'] = 'r';
	map<char, char> group;
	group[')'] = '('; group['}'] = '{'; group[']'] = '[';//ͨ������������������
	for (string::iterator s_i = s.begin(); s_i != s.end(); )
	{
		if (side[*s_i] == 'r')//�ҵ�һ�γ��������ŵĵ�
		{
			if (s_i == s.begin())
			{
				return flag = 0;//�����ʼ�ͳ����������ţ����ǷǷ��ģ����ؼ���
			}
			if (group[*s_i] == *(s_i - 1))
			{
				s.erase(s_i - 1);
				s.erase(s_i - 1);//���˵���ǶԵģ��ǾͰ���ȷ����һ�Զ�ɾ����,ָ��Ҫ��ǰ�ƶ�һλ
				if (s.size() == 0)
				{
					return flag=1;//���ɾ��û���ˣ��ͷ�����Ϊ����ȷ��
				}
				else{
					s_i--;
				}
			}
			else
			{
				return flag = 0;//��������˵�����������⣬����
			}
		}
		else
		{
			s_i++;//������ֵĲ��������ž��ƶ�����һ��
		}
	}
	
	return flag;//������еĶ��������ţ���ô��������ﷵ�� 0
}

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode *head = new ListNode(0);//����Ҫ���ص��Ǹ�ֵ
	ListNode *temp;
	temp = head;
	while (l1 != NULL || l2 != NULL)
	{
		//ֻҪ��һ����Ϊ���ִ�����г���
		if (l1 == NULL)
		{
			temp->next = l2;
			l2 = l2->next;
		}
		else
		{
			if (l2 == NULL)
			{
				temp->next = l1;
				l1 = l1->next;
			}
			else
			{//��������ǿյ�
				if (l1->val > l2->val)
				{//ȡС�ķ���ǰ��
					temp->next = l2;
					l2 = l2->next;
				}
				else{
					temp->next = l1;
					l1 = l1->next;
				}
			}
		}
		temp = temp->next;//ÿ�ζ�Ҫ������ָ��ͬʱǰ��
	}
	//�ѸղŽ�����ͷɾ��


	return head->next;
}

ListNode* Solution::swap_pairs(ListNode* head)
{
	if (head==0)
	{return head;}
	ListNode *backer, *fronter, *temp;
	//�α궨λ
	backer = head;
	if (head->next == NULL){ return head; }//���ֻ����һ�������
	fronter = head->next;
	temp = fronter->next;//�����У�Ҳ������NULL
	//���н���
	head = fronter;
	fronter->next = backer;
	if (temp != NULL && temp->next!=NULL)
	{
		backer->next = temp->next;
	}
	else if (temp != NULL && temp->next == NULL)
	{
		backer->next = temp;
		return head;
	}
	else { backer->next = NULL; return head; }
	while (temp != NULL) 
	{
		//�ƶ��α�
		backer = temp;

		fronter = temp->next;
		temp = fronter->next;
		//���н���
		fronter->next = backer;
		if (temp != NULL && temp->next != NULL)
		{
			backer->next = temp->next;
		}
		else if (temp != NULL && temp->next == NULL)
		{
			backer->next = temp;
			return head;
		}
		else { backer->next = NULL; return head; }
	}
	return head;
}

int Solution::removeDuplicates(vector<int>& nums)
{
	if (nums.size() == 0)
		return 0;
	vector<int>::iterator nums_i = nums.begin(), nums_j = nums.begin() + 1;
	while (nums_i != nums.end() && nums_j != nums.end())
	{
		if (*nums_i == *nums_j)
		{
			nums_j=nums.erase(nums_j);//ɾ������j������j��һ��Ԫ�ص�ָ�룬���û�оͷ���end()ָ��
		}
		else{
			nums_i++; nums_j++;
		}
	} 
	return nums.size();
}

int Solution::removeElement(vector<int>& nums, int val) {
	vector<int>::iterator nums_i = nums.begin();
	while( nums_i != nums.end() )
	{
		if (*nums_i == val)
		{
			nums_i = nums.erase(nums_i);
		}
		else{
			nums_i++;
		}	
	}
	return nums.size();
 
}
int Solution::strStr(string haystack, string needle) {

	return haystack.find(needle);
}

bool Solution::isValidSudoku(vector<vector<char>>& board)
{
	return true;//
}

int Solution::mySqrt(int x) {
	//����һ���������������ƽ����
	if (x == 1)
		return x;

	long long int s;
	s = x / 2;
	long long int leftflag = 0, rightflag = x;
	while (s*s != x && leftflag+1<rightflag)
	{

		if (s*s < x)
		{//���Ҳ�������Ѱ��
			leftflag = s;
		}
		else
		{
			rightflag = s;
		}
		s = (leftflag + rightflag) / 2;
		cout << "left " << leftflag << endl;
		cout << "right" << rightflag << endl;
		cout << "s" << s << endl;
	} 
		return s;

	/*���Բ��͵�һ���ο�*/
		//long long left = 0, right = (x / 2) + 1;
		//while (left <= right) {
		//	long long mid = (left + right) / 2;
		//	long long sq = mid * mid;
		//	if (sq == x) return mid;
		//	else if (sq < x) left = mid + 1;
		//	else right = mid - 1;
		//}
		//return right;

}

int Solution::searchInsert(vector<int>& nums, int target) {
	int position=0;
	vector<int>::iterator iter = nums.begin();
	while (iter != nums.end() && target > *iter)// && target != *iter)
	{
		iter++; position++;
	}

	return position;
}

int Solution::climbStairs(int n) {
	//ֱ�ӽ��еݹ�
	//if (n == 1) return 1;
	//if (n == 2) return 2;
	//return climbStairs(n - 1) + climbStairs(n - 2);
	//���õݹ��ѭ����ת��
	if (n == 1) return 1;
	if (n == 2) return 2;
	vector<int> res;
	res.push_back(1);
	res.push_back(2);
	for (int i = 2; i < n ; i++)
	{
		res.push_back(res.at(i - 1) + res.at(i - 2));
	}	
	return res.back();// .at(n - 1);
}

ListNode* Solution::deleteDuplicates(ListNode* head) {
	ListNode* former;ListNode* latter;
	former = head; latter = former->next;
	while (latter != NULL)
	{
		if (former->val == latter->val)
		{
			former->next = latter->next; latter = former->next;
		}
		else
		{
			former = latter; latter = former->next;
		}
	} 
	return head;

}
bool Solution::isSameTree(TreeNode* p, TreeNode* q) {
	return false;
}