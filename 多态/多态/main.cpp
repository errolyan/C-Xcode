//
//  main.cpp
//  多态
//
//  Created by YanErrol on 2021/2/2.
//

#include <iostream>
using namespace std;
 
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
    virtual int area() = 0;
//      int area()
//      {
//         cout << "Parent class area :" <<endl;
//         return 0;
//      }
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Triangle class area :" <<endl;
         return (width * height / 2);
      }
};
// 程序的主函数
int main( )
{

   Rectangle rec(10,7);
   Triangle  tri(10,5);

    rec.area();
    tri.area();
   
   return 0;
}
