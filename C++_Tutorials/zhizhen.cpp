# include <iostream>
using namespace std;

int main()
{
    int var1;
    int var2[10];

    cout << "var1变量的地址：" << &var1 <<endl;
    cout << "var2变量地址：" << &var2 <<endl;

    int var = 20;
    int *ip;
    ip = &var;

    cout << "Value of var variable: ";
    cout << var << endl;
 
    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << ' '<< &var<<endl;
 
    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << ip<< endl;

    return 0;
}