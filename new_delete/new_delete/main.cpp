//
//  main.cpp
//  new_delete
//
//  Created by YanErrol on 2021/2/2.
//

#include <iostream>
using namespace std;

#define PI 3.14159
// 第一个命名空间
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
}
// 第二个命名空间
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
   }
}

int main ()
{
   double* pvalue  = NULL; // 初始化为 null 的指针
   pvalue  = new double;   // 为变量请求内存
 
   *pvalue = 29494.99;     // 在分配的地址存储值
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // 释放内存
    
    // 调用第一个命名空间中的函数
      first_space::func();
      
      // 调用第二个命名空间中的函数
      second_space::func();
    cout << "Value of PI :" << PI << endl; 
   return 0;
}
