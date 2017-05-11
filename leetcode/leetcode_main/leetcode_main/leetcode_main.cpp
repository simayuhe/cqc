// leetcode_main.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Solution.h"
#include "myprintf.h"
#include <iostream>
#include "intSLLST.h"

void createBitree(TreeNode * &T)
{
	char ch;
	if ((ch = getchar()) == '#')
	{
		T = NULL;
	}
	else
	{
		T = new TreeNode(ch - '0');//
		//T->val = ch-'0';
		createBitree(T->left);
		createBitree(T->right);
	}
}
void PreOrderTraverse(TreeNode * &T)
{
	if (T)
	{
		cout << T->val;
		PreOrderTraverse(T->left);
		PreOrderTraverse(T->right);
	}
	else
	{
		cout << "";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	Solution solution;
	/*two sum*/
	//vector<int> new_numbers;
	//vector<int> nums{ 5,2,6,8, 7, 11, 15 };
	//int target = 10;
	//new_numbers = solution.twoSum(nums, target);
	//myprintf mytype;
	//mytype.printfVector(new_numbers);

	/*zigzag*/
	//string str = "a";
	//string new_str;
	//int nrows = 1;
	//new_str = solution.zigzag(str, nrows);
	//cout << new_str << endl;

	/*Reverse Integer*/
	//int x{ 1 };
	//int x_reversed;
	//cout << "x" << x << endl;
	//x_reversed=solution.Reverse_Integer(x);
	//cout << "x_reversed:" << x_reversed << endl;

	/*myAtio*/
	//string str{ "    +11191657170" };
	//int ans;
	//ans = solution.myAtoi(str);
	//cout << "ans : " << ans;

	/*isPalindrome*/
	//int x{ -2147447412 };
	//bool flag{ 1 };
	//flag = solution.isPalindrome(x);
	//cout << flag << endl;

	/*RomanToInt*/
	//string roman{ "CCIV" };
	//int trans_ans{};
	//trans_ans = solution.romanToInt(roman);
	//cout << trans_ans << endl;

	/*Longest Common Prefix*/
	//vector<string> strs;
	//strs.push_back("");
	//strs.push_back("bigger");
	//strs.push_back("biggest");
	//string longest_prefix;
	//longest_prefix = solution.longestCommonPrefix(strs);
	//cout << longest_prefix << endl;

	/*test for linked list*/
	//IntSLList mylist;
	//mylist.addToHead(1);
	//mylist.addToTail(3);
	//mylist.addToTail(5);
	//bool iss=mylist.isInList(4);
	//cout << iss << endl;

	/*remove nth node from the end of a single list*/
	//ListNode A{ 1 }, B{ 2 }, C{ 3 }, D{ 4 }, E{ 5 };
	//ListNode *head = &A;
	//A.next = &B; B.next = &C; C.next = &D; D.next = &E; E.next = NULL;
	//ListNode* result{solution.removeNthFromEnd(head,0)};
	//cout << (*result).val << endl;
	//do
	//{
	//	result = result->next;
	//	cout << (*result).val << endl;
	//	
	//} while ((*result).next != NULL);

	/*Valid Parentheses*/
	//string input{ "{([][())}" };
	//bool flag{ solution.isValid(input) };
	//cout << "flag : " << flag << endl;

	/* Merge Two Sorted Lists*/
	//ListNode A{ 1 }, B{ 2 }, C{ 3 }, D{ 4 }, E{ 5 };
	//ListNode *L1 = &A;
	//A.next = &B; B.next = &C; C.next = &D; D.next = &E; E.next = NULL;

	//ListNode A2{ 11 }, B2{ 21 }, C2{ 31 }, D2{ 41 }, E2{ 51 };
	//ListNode *L2 = &A2;
	//A2.next = &B2; B2.next = &C2; C2.next = &D2; D2.next = &E2; E2.next = NULL;
	//ListNode* result{solution.mergeTwoLists(L1,L2)};
	//cout << (*result).val << endl;
	//while ((*result).next != NULL)
	//{//这种输出要求result不能只有一个
	//	result = result->next;
	//	cout << (*result).val << endl;
	//}

	/*Swap Nodes in Pairs*/
	//ListNode A{ 1 }, B{ 2 }, C{ 3 }, D{ 4 }, E{ 5 };
	//ListNode *head = &A;
	//A.next = &B; B.next = &C; C.next = &D; D.next = &E; E.next = NULL;
	//ListNode* result;
	//result = solution.swap_pairs(head);
	//cout << (*result).val << endl;
	//while ((*result).next != NULL)
	//{//这种输出要求result不能只有一个
	//	result = result->next;
	//	cout << (*result).val << endl;
	//}
	/*Remove Duplicates from Sorted Array*/
	//vector<int> nums;
	//nums.push_back(1);// nums.push_back(2);// nums.push_back(2); nums.push_back(2);
	//nums.erase(nums.begin());
	//cout << nums.size();
	//int length{ solution.removeDuplicates(nums) };
	//cout << length << endl;

	/*Remove Element*/
	//vector<int> nums;
	//nums.push_back(1); nums.push_back(2); nums.push_back(3); nums.push_back(2);
	//int length{ solution.removeElement(nums, 3) };
	//cout << length << endl;

	/*Implement strStr()*/
	//string haystack{ "this is the first time " }, needle{ "the" };
	//int idx{ solution.strStr(haystack, needle) };
	//cout << idx << endl;
	//return 0;

	
/*my Sqrt */
//int x,s;
//x = 23435464369436;
//s = solution.mySqrt(x);
//cout << s << endl;


/*search	insert position*/
//vector<int> numbers = { 1, 2, 3, 4 };
//int target = 3;
//int position;
//position = solution.searchInsert(numbers, target);
//cout << position << endl;

/*climbing stairs*/
//int  n;
//n = 4;
//int out;
//out = solution.climbStairs(n);
//cout << out << endl;


/*Remove Duplicates from Sorted List*/
//ListNode A{ 1 }, B{ 2 }, C{ 2 }, D{ 4 }, E{ 4 };
//ListNode *head = &A;
//A.next = &B; B.next = &C; C.next = &D; D.next = &E; E.next = NULL;
//ListNode* result;
//result = solution.deleteDuplicates(head);
//cout << (*result).val << endl;
//while ((*result).next != NULL)
//{//这种输出要求result不能只有一个
//	
//	result = result->next;
//	cout << (*result).val << endl;
//}
TreeNode *T;
cout << "创建一颗树，其中A->Z字符代表树的数据，用“#”表示空树:" << endl;
createBitree(T);
cout << "先序递归遍历：" << endl;
PreOrderTraverse(T);
cout << endl;

return 0;
}

