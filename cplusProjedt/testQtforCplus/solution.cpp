#include "solution.h"

Solution::Solution()
{
}
void Solution::print_vector(vector<int> & input)
{
    for (vector<int>::iterator iter=input.begin();iter!=input.end();iter++)
    {
        cout<<*iter;
    }
}

int Solution::max_int(int a, int b)
{
    int c;
    c=a;
    if (a<b)
    {c=b;}
    return c;
}
int Solution::strStr (string haystack,string needle)
{
    return haystack.find(needle);
}
string Solution::countAndSay(int n) {
    string result,str_temp;
    if (n==0)
    {return NULL;}
    if(n==1)
    {
        result.push_back(1+'0');
        return result;
    }
    int n_copy;
    n_copy=n;
    //while (n)
    //{
      //  string temp_a;
      //  temp_a.push_back(n%10+'0');
      //  str_temp.insert(0,temp_a);
        //n=n/10;
    //}
    str_temp.push_back(1+'0');
    cout<<"str_temp"<<str_temp<<endl;
    int count;
    char temp_char;
        while(n_copy>1)
        {
             result.clear();
            count=1;
            temp_char=str_temp.at(0);
            str_temp.erase( str_temp.begin());
            while(!str_temp.empty())
            {
                if (str_temp.at(0)!=temp_char )
                {result.push_back(count+'0');result.push_back(temp_char);count=1;temp_char=str_temp.at(0);}
                else
                {count++;}
                str_temp.erase(str_temp.begin());
            }
            result.push_back(count+'0');
            result.push_back(temp_char);
            str_temp=result;
            n_copy--;
        }
    return result;

}

int Solution::lengthOfLastWord(string s) {
    //eg: "" ," ","a","a ","  hj  g     "
        if (s.size()==0)
            return 0;
        int length;
        length=0;
  /*      string::iterator s_iter=s.end()-1;
        if (*s_iter==' ')
            s_iter--;
        while( *(s_iter)!=' ' )//&& s_iter!=s.begin())
        {
            length++;
            if  (s_iter==s.begin())
                    break;
            s_iter--;
        }
        */
        for (string::iterator s_iter=s.end()-1;s_iter!=s.begin()-1;s_iter--)
        {
            if (*s_iter==' ')
               { if (length==0)
                    continue;
                else
                    break;
            }
            length++;
        }

        return length;

    }

vector<int> Solution::plusOne(vector<int>& digits) {
        int c;//carry bit
        c=1;
        int d_size;
        d_size=digits.size();
        for ( int iter=d_size-1;iter>-1;iter--)
        {
            int temp=digits[iter]+c;
            c=temp/10;
            digits[iter]=temp%10;
           if (c==0)
           {break;}
        }
        if (c==1)
        {//instert 1 at the beginning
            digits.insert(digits.begin(),1);
        }
        return digits;
    }

string Solution::addBinary(string a, string b)
{
    string result;
    int  carry;
    carry=0;
    int maxsize;
    maxsize=a.size()>b.size()?a.size():b.size();//max_int(a.size(),b.size());
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for (int i=0;i<maxsize;i++)
    {
        int ai,bi,val;
        ai=i<a.size()?a.at(i)-'0':0;
        bi=i<b.size()?b.at(i)-'0':0;
        val=ai+bi+carry;
        carry=val/2;
        result.insert(result.begin(),val%2+'0');
    }
  if (carry==1)
   {result.insert(result.begin(),'1');}
//result.insert(result.begin(),'y');

    //restult={"110"};
    return result;
}
int Solution::climbStairs(int n)
{
    int result;
    if (n==1)
        result=1;
    if (n==2)
        result=2;
    if (n>2)
        result=climbs(n-1)+climbs(n-2);
    return result;
}
int Solution::climbs(int n)
{
    if (n==0)
    {return 0;}
    else if (n==1)
    {return 1;}
    else
    {return climbs(n-1)+climbs(n-2);}
}

ListNode* Solution::deleteDuplicates(ListNode* head) {
    ListNode *curnote;
    curnote=head;
    while(curnote->next!=NULL)
    {
           if (curnote->val==curnote->next->val)
           {curnote->next=curnote->next->next;}
           else
           {curnote=curnote->next;}
    }
    return head;
}
