//
//  main.cpp
//  C++指针
//
//  Created by YanErrol on 2021/1/29.
//

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    int var = 20;
    int *ip;
    ip = &var;
    int i = 18;
    int & r = i;
    r = 188;
    cout << r << i << endl;
    cout << var << endl;
    cout << ip << endl;
    cout << *ip << endl;
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    cout << "1970年1月1日到目前经过的秒数:" << now << endl;
    
    tm *ltm = localtime(&now);
    
    // 输出 tm 结构的各个组成部分
       cout << "年: "<< 1900 + ltm->tm_year << endl;
       cout << "月: "<< 1 + ltm->tm_mon<< endl;
       cout << "日: "<<  ltm->tm_mday << endl;
       cout << "时间: "<< 1 + ltm->tm_hour << ":";
       cout << 1 + ltm->tm_min << ":";
       cout << 1 + ltm->tm_sec << endl;
    
    cout<< now << endl;
    char* dt = ctime(&now);
    cout << "本地日期和时间：" << dt << endl;
    tm *gmtm = gmtime(&now);
       dt = asctime(gmtm);
       cout << "UTC 日期和时间："<< dt << endl;
    return 0;
}
