整理leetcode 题目，从easy 38开始：
 38. Count and Say

The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string. 

注：输入一个整数，然后记录有多少个重复字符出现，问题是1211 要怎么读呢，猜想是这样的“one 1”,"one 2","two 1s".注意输入的是一个整数，输出的是字符串。
但是在qt编译时不能使用pop_back () ，back(),所以只能用尾指针来做了。
string Solution::countAndSay(int n) {
    string result,str_temp;
    if (n==0)
    {return NULL;}
    if(n==1)
    {
        result.push_back(1+'0');
                return result;
    }
    while (n)
    {
        char temp_a;
        temp_a=n%10+'0';
        str_temp.push_back(temp_a);
        n=n/10;
    }
    int count;
    count=1;
    string::iterator str_back=str_temp.end()-1;
    char temp_char;
    temp_char=*str_back;
    str_back=str_temp.erase(str_back)-1;
    while(!str_temp.empty())
      {
          if (*str_back!=temp_char || str_temp.empty())
         {result.push_back(count+'0');result.push_back(temp_char);count=1;temp_char=*str_back;}
          else
           {count++;}
          str_back=str_temp.erase(str_back)-1;
      }
      result.push_back(count+'0');result.push_back(temp_char);
    return result;
    }
代码敲进去之后发现题意理解错误^o^.
题意是让我们产生一个序列，这个序列是输入1，然后读1个1，得到11，然后读两个1，得到21，然后读1个2，一个1，得到1211，然后读1个1，一个2，两个1 得到111221......
重新来过：输入n的含义是，给定整数n输出第n个序列，如果n=3,那么先读1个3，得到13，然后读1个1，1个3 ，得到1113，输出即可。
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
    while (n)
    {
        string temp_a;
        temp_a.push_back(n%10+'0');
        str_temp.insert(0,temp_a);
        n=n/10;
    }
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
结果有理解错误，应该是输入一定是1的序列然后读取第n个而已。稍作更改：
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


