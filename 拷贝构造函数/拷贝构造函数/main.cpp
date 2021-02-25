//
//  main.cpp
//  拷贝构造函数
//
//  Created by YanErrol on 2021/2/1.
//

#include <iostream>
using namespace std;

class CExample {
private:
    　int a;
public:
      //构造函数
    　CExample(int b)
    　{ a = b;}

      //一般函数
    　void Show ()
    　{
        cout<<a<<endl;
      }
};
int main()
{
    　CExample A(100);
    　CExample B = A; //注意这里的对象初始化要调用拷贝构造函数，而非赋值
    　B.Show ();
    　return 0;
}
