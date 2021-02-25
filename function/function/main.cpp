//
//  main.cpp
//  function
//
//  Created by YanErrol on 2021/1/29.
//

#include <iostream>
#include <iomanip>
using std::setw;
using namespace std;
int max(int,int);


int main(int argc, const char * argv[]) {
    // 局部变量声明
       int a = 100;
       int b = 200;
       int ret;
     
       // 调用函数来获取最大值
   ret = max(a, b);
    std::cout << "Max value is : "<< ret << std::endl;
    
    int n[ 10 ]; // n 是一个包含 10 个整数的数组
     
       // 初始化数组元素
       for ( int i = 0; i < 10; i++ )
       {
          n[ i ] = i + 100; // 设置元素 i 为 i + 100
       }
       cout << "Element" << setw( 13 ) << "Value" << endl;
     
       // 输出数组中每个元素的值
       for ( int j = 0; j < 10; j++ )
       {
          cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
       }
    return 0;
}

int max(int num1, int num2)  {    // 局部变量声明
    int result;
    if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result;
}
