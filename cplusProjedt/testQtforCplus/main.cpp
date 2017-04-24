#include <iostream>
#include "solution.h"
#include <stdio.h>
#include <sstream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Solution mysolution;
    /*count and say */
  //  int a_int;
  //  a_int=3;
   // cout<<"input :"<<a_int<<endl;
    //cout <<"result :"<< mysolution.countAndSay(a_int)<<endl;
    /*length of last word*/
    /*string input;
    input={"f k ooi    "};
    cout<<"length of last word is "<<mysolution.lengthOfLastWord(input)<<endl;*/
    /*plus  one to integer  represented by an array */
    //vector<int> input;
    //input.push_back(0);
    //input.push_back(9);
   //  mysolution.print_vector(input);
     //cout<<endl;
     //vector<int> output;
     //output=mysolution.plusOne(input);
     //mysolution.print_vector(output);
     //cout<<endl;
/*addbinary*/
    //string inputa,inputb,output;
    //inputa={"1110"};
    //inputb={"1"};
    //output=mysolution.addBinary(inputa,inputb);
    //cout<<output<<endl;

  /*climbStairs*/
   /* int input;
    input=5;
    int output;
    output=mysolution.climbStairs(input);
    cout<<output<<endl;*/
    ListNode A,B,C,D;
    A->val=1;A->next=&B;B->val=1;B->next=&C;C->val=2;C->next=NULL;
    ListNode *head;
    head=A;
    ListNode *output;
    output=mysolution.deleteDuplicates(head);
    cout>>output->val>>endl;
    output=output->next;
    cout>>output->val>>endl;



    return 0;
}

