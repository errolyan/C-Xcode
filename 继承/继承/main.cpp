//
//  main.cpp
//  继承
//
//  Created by YanErrol on 2021/2/1.
//

#include <iostream>
using namespace std;

class Shape
{
protected:
    double width;
    double height;
public:
    void setwidth(double w)
    {
        width = w;
    }
    void setheight(double h)
    {
        height = h;
    }
};

class Rectangle:public Shape
{
public:
    double getArea()
    {
        return (width*height);
    }
};

int main(void)
{
    Rectangle Rect;
    Rect.setwidth(5);
    Rect.setheight(8.8);
    cout<<"Area : "<<Rect.getArea() << endl;
    return 0;
}
