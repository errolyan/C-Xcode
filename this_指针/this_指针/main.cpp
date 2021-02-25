//
//  main.cpp
//  this_指针
//
//  Created by YanErrol on 2021/2/1.
//

#include <iostream>
 
using namespace std;

class Box
{
   public:
      static int objectCount;
      static int getCount()
          {
             return objectCount;
          }
    
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
          objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box box)
      {
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// 初始化类 Box 的静态成员
int Box::objectCount = 0;

int main(void)
{
    // 在创建对象之前输出对象的总数
       cout << "Inital Stage Count: " << Box::getCount() << endl;
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
    // 在创建对象之后输出对象的总数
       cout << "Final Stage Count: " << Box::getCount() << endl;
    
    cout << Box1.compare(Box2)<<endl;
   if(Box1.compare(Box2))
   {
      cout << "Box2 is smaller than Box1" <<endl;
   }
   else
   {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }
   return 0;
}

