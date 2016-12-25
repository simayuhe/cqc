#include "solution.h"

Solution::Solution()
{
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


