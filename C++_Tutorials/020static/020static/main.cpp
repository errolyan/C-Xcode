//
//  main.cpp
//  020static
//
//  Created by YanErrol on 2020/9/3.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;
class Person
{
    
public:

    static int m_A; //静态成员变量
private:
    static int m_B; //静态成员变量也是有访问权限的
};
int Person::m_A = 10;
int Person::m_B = 10;

void test01()
{
    //静态成员变量两种访问方式

    //1、通过对象
    Person p1;
    p1.m_A = 100;
    cout << "p1.m_A = " << p1.m_A << endl;

    Person p2;
    p2.m_A = 200;
    cout << "p1.m_A = " << p1.m_A << endl; //共享同一份数据
    cout << "p2.m_A = " << p2.m_A << endl;

    //2、通过类名
    cout << "m_A = " << Person::m_A << endl;


    //cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    test01();
    return 0;
}
