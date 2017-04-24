#ifndef SOLUTION_H
#define SOLUTION_H
#include  <iostream>
#include  <vector>
#include  <string>
#include <algorithm>
using namespace std;
/*Definition for singly-linked list.*/
struct ListNode {
 int val;
 ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
 };

class Solution
{
public:
    Solution();
    void print_vector(vector<int> & input);
    int strStr (string haystack,string needle);
    string countAndSay(int n);
    int lengthOfLastWord(string );
    vector<int> plusOne(vector<int>& digits) ;
    string addBinary(string a, string b);
    int climbStairs(int n);
    int climbs(int n);
    ListNode* deleteDuplicates(ListNode* head) ;
private:
   int max_int(int a,int b);

};

#endif // SOLUTION_H
