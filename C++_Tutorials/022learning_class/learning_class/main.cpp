//
//  main.cpp
//  learning_class
//
//  Created by YanErrol on 2020/9/1.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int x,int y) : x(x), y(y) { }
        
        int getX() const {
            return x;
        }
        
        void setX(int x) {
            this->x = x;
        }
        
        int getY() const {
            return y;
        }
        
        void setY(int y) {
            this->y = y;
        }
        
        void setXY(int x, int y) {
            this->x = x;
            this->y = y;
        }
        
        double getMagnitude() const {
            return sqrt(x*x + y*y);
        }
        
        double getArgument() const {
            return atan2(y, x);
        }
        
        void print() const {
            cout << "(" << x << "," << y << ")" << endl;
        }
    };

void showExample(){
    Point p1(1, 2);
    p1.print();
    cout << "x: " << p1.getX() << endl;
    cout << "y: " << p1.getY() << endl;
    cout << "mag: " << p1.getMagnitude() << endl;
    cout << "arg: " << p1.getArgument() << endl;
    p1.setX(5);
    p1.setY(9);
    p1.print();
    
    p1.setXY(2, 4);
    p1.print();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    showExample();
    return 0;
}
