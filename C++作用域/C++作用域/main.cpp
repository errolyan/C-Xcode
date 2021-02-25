//
//  main.cpp
//  C++作用域
//
//  Created by YanErrol on 2021/1/29.
//

#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main(int argc, const char * argv[]) {
    // 局部变量声明
    int a, b;
    int c;
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl;
    cout << "hello\tworld\n\n";
    
    int area;
    area = LENGTH * WIDTH;
       cout << area;
       cout << NEWLINE;
    
    short int i;           // 有符号短整数
    short unsigned int j;  // 无符号短整数

    j = 50000;
    i = j;
    cout << i << " " << j<<endl;
    
    short int m;           // 有符号短整数
    short unsigned int n;  // 无符号短整数
    m = 50000;
    n = m;
    cout << m << " " << n<<endl;
    
    return 0;
}
