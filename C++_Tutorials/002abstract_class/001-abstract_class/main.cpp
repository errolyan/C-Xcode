//
//  main.cpp
//  001-abstract_class
//
//  Created by YanErrol on 2020/9/1.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;

class MyClass {
    
public:
    int data[100];
    MyClass() {
        std::cout << "constructed [" << this << "]" <<endl;
    }
};

void showExample004(){
    std::cout << "1: ";
    MyClass * p1 = new MyClass();
    std::cout << "2: ";
    MyClass * p2 = new (std::nothrow) MyClass();
    std::cout << "3: ";
    new (p2) MyClass();
    std::cout << "4: ";
    MyClass * p3 = (MyClass*) ::operator new (sizeof(MyClass));
    
    delete p1;
    delete p2;
    delete p3;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    showExample004();
    return 0;
}
