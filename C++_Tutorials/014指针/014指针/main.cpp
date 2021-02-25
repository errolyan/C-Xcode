//
//  main.cpp
//  014指针
//
//  Created by YanErrol on 2020/9/2.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;

//值传递
void swap1(int a ,int b)
{
    int temp = a;
    a = b;
    b = temp;
}
//地址传递
void swap2(int * p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //1、指针的定义
    int a = 10; //定义整型变量a
    
    //指针定义语法： 数据类型 * 变量名 ;
    int * p;

    //指针变量赋值
    p = &a; //指针指向变量a的地址
    cout <<"&a"<< &a << endl; //打印数据a的地址
    cout << "p"<< p << endl;  //打印指针变量p

    //2、指针的使用
    //通过*操作指针变量指向的内存
    cout << "*p = " << *p << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;
    
    
    int b = 20;
    swap1(a, b); // 值传递不会改变实参
    swap2(&a, &b); //地址传递会改变实参
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
