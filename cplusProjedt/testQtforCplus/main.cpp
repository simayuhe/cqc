#include <iostream>
#include "solution.h"
#include <stdio.h>
#include <sstream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Solution mysolution;
    int a_int;
    a_int=3;
    cout<<"input :"<<a_int<<endl;
    cout <<"result :"<< mysolution.countAndSay(a_int)<<endl;
    return 0;
}

