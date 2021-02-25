//
//  main.cpp
//  018class
//
//  Created by YanErrol on 2020/9/3.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;

class Student{
public:
    void setName(string name) {
            m_name = name;
        }
        void setID(int id) {
            m_id = id;
        }

        void showStudent() {
            cout << "name:" << m_name << " ID:" << m_id << endl;
        }
    void func()
    {
        m_name = "张三";
        m_Car = "拖拉机";
        m_password = 123456;
    }
public:
        string m_name;
        int m_id;
protected:
    string m_Car;
private:
    int m_password;
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Student stu;
    stu.setName("德玛西亚");
    stu.setID(250);
    stu.showStudent();
     Student p;
    p.m_name = "李四";
    //p.m_Car = "奔驰";  //保护权限类外访问不到
    //p.m_Password = 123; //私有权限类外访问不到
    return 0;
}
