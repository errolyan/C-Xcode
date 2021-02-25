//
//  main.cpp
//  存储类
//
//  Created by YanErrol on 2021/1/29.
//

#include <iostream>

int func(void);
static int count=10; /*全局变量*/
int main(int argc, const char * argv[]) {
    while(count--)
        {
          std::cout << func()<<"\n";
        }
    std::cout << "Hello, World!\n";
    return 0;
}

// 函数定义
int func( void )
{
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "变量 i 为 " << i ;
    std::cout << " , 变量 count 为 " << count << std::endl;
    return count;
}
