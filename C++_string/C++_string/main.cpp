//
//  main.cpp
//  C++_string
//
//  Created by YanErrol on 2021/1/29.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str1="hello";
    string str2=" world";
    string str3;
    int len;
    
//复制
    str3 = str1;
    cout << "str3 :"<< str3 <<endl;
    
    str3 = str1+str2;
    cout << "str3 :"<< str3 <<endl;
    
    len = str3.size();
    cout << "str3.size:" << len <<endl;
    return 0;
}
