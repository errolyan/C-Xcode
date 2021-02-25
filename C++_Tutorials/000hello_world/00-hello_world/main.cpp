//
//  main.cpp
//  00-hello_world
//
//  Created by YanErrol on 2020/9/1.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
#define day 7

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int  new_name=0;
    std::cout<<"请输入数据:";
    std::cin>>new_name;
    std::cout<<"输入的数据为："<<new_name<<"\n";
    std::cout << "一周里总共有 " << day << " 天" << std::endl;//day = 8;  //报错，宏常量不可以修改
    std::cout <<"占内存大小"<<sizeof(day)<<"\n";
    //2、const修饰变量
    const int month = 12;
    std::cout << "一年里总共有 " << month << " 个月份" << std::endl;
    //month = 24; //报错，常量是不可以修改的
    return 0;
}
