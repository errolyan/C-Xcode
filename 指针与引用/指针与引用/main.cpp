//
//  main.cpp
//  指针与引用
//
//  Created by YanErrol on 2021/2/19.
//

#include <iostream>
using namespace std;


void testPTR(int* p) {
    int a = 12;
    p = &a;

}

void testREFF(int& p) {
    int a = 12;
    p = a;

}
int main()
{
    int a = 10;
    int* b = &a;
    testPTR(b);//改变指针指向，但是没改变指针的所指的内容
    cout << a << endl;// 10
    cout << ++*b << endl;// 10

    a = 10;
    testREFF(a);
    cout << a++ << endl;//12
    return 0;
}
