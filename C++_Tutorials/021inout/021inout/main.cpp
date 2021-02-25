//
//  main.cpp
//  021inout
//
//  Created by YanErrol on 2020/9/3.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

void test01()
{
    std::ofstream ofs;
    ofs.open("test.txt", std::ios::out);
    ofs << "姓名：张三";
    ofs << "性别：男";
    ofs << "年龄：18";
    ofs.close();
}

//void test02()
//{
//    std::ifstream ifs;
//    ifs.open("test2.txt", std::ios::in);
//    if (!ifs.is_open())
//    {
//        std::cout << "文件打开失败";
//        return;
//    }
//    char c;
//    while ((c = ifs.get()) != EOF)
//    {
//        std::cout << c;
//    }
//    ifs.close();
//}
int main() {
    test01();
//    test02();
    return 0;
}
