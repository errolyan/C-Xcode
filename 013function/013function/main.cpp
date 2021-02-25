//
//  main.cpp
//  013function
//
//  Created by YanErrol on 2020/9/2.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;

int add (int num1,int num2)
{
    int sum =num1+num2;
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int a = 10;
    int b = 10;
    //调用add函数
    int sum = add(a, b);//调用时的a，b称为实际参数，简称实参
    cout << "sum = " << sum << endl;
    return 0;
}
