#pragma once
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include "math.h"
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class io_ListNode{
public:
	io_ListNode(){
		head = tail = 0;
	}
	~io_ListNode();
	int isEmpty(){ return head == 0; }
	void addToHead(int el){
		head = new ListNode(el);
		if (tail == 0)
			tail = head;
	}//�ڱ�ͷ�������ݵ�
	void addToTail(int el){
		if (tail != 0)
		{
			tail->next = new ListNode(el);//��ǰβ���ڵ��nextָ��
			tail = tail->next;//�趨�µ�β��ָ��
		}
		else
		{
			head = tail = new ListNode(el);//ԭ��Ϊ�������ˣ�����ֻ��һ���ڵ㣬����ֻ�����ڵ����ݣ��ڵ��nextָ��Ϊ0
		}
	
	}//�ڱ�β����������

private:
	ListNode *head, *tail;
};

class Solution
{
public:
	Solution();
	~Solution();
	//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
	//You may assume that each input would have exactly one solution.
	//example:
	/*Given nums = [2, 7, 11, 15], target = 9,
		Because nums[0] + nums[1] = 2 + 7 = 9,
		return[0, 1].*/
	vector<int> twoSum(vector<int> & nums, int & target);
	string zigzag(string & s, int & nrows);
	int Reverse_Integer(int & x);
	int myAtoi(string & str);
	bool Solution::isPalindrome(int & x);
	int romanToInt(string s);
	string longestCommonPrefix(vector<string>& strs);
	ListNode* removeNthFromEnd(ListNode* head, int n);
	bool isValid(string s);
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
	ListNode* swap_pairs(ListNode* head);
	int removeDuplicates(vector<int>& nums);
	int removeElement(vector<int>& nums, int val);
	int strStr(string haystack, string needle);
	bool isValidSudoku(vector<vector<char>>& board);

	int mySqrt(int x);
	int searchInsert(vector<int>& nums, int target);
};

