//
//  main.cpp
//  017new
//
//  Created by YanErrol on 2020/9/3.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;

int* func()
{
    int* a = new int(10);
    return a;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    //利用delete释放堆区数据
    delete p;

    //cout << *p << endl; //报错，释放的空间不可访问
    int a = 10;
    int &b = a;
    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
