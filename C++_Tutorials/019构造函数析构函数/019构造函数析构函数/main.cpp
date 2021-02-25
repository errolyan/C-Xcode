//
//  main.cpp
//  019构造函数析构函数
//
//  Created by YanErrol on 2020/9/3.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;
class Person
{
public:
    //构造函数
    Person()
    {
        cout << "Person的构造函数调用" << endl;
    }
    
    int test(){
        cout<<"hello"<<endl;
        return 0;
    }
    //析构函数
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

};

void test01()
{
    Person p;
    p.test();
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    test01();
    return 0;
}
