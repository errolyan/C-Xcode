#include <iostream>  
using namespace std;

int func();

int main() {  

   cout << "Welcome to C++ Programming.\n";  
   int i = func(); 
   cout << i << endl;
   return 0;
}

 
// 函数定义
int func()
{
    return 10;
}