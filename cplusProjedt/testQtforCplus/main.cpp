#include <iostream>
#include "solution.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Solution mysolution;
    string haystack;
    haystack={"this is the first name "};
    string needle;
    needle={"the"};
    int idx;
    idx=mysolution.strStr(haystack,needle);
    cout<<idx<<endl;
    cout<<"I want to see something created by myself !"<<endl;
    return 0;
}

