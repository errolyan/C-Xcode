# include <iostream>
# include <ctime>
using namespace std;

int main()
{
    int i;
    double d;

    int& r = i;
    double& s= d;

    int *ip ;
    double *dp;
    ip = &i;
    dp = &d;

    i = 5;
    cout << "Value of i : " << i << " ip ="<<ip<<" *ip ="<<*ip<<endl;
    cout << "Value of i reference : " << r  << endl;
 
    d = 11.7;
    cout << "Value of d : " << d <<" dp="<<dp<<" *dp="<<*dp<<endl;
    cout << "Value of d reference : " << s  << endl;
    
    // 基于当前系统的当前日期/时间
   time_t now = time(0);
   
   // 把 now 转换为字符串形式
   char* dt = ctime(&now);
 
   cout << "本地日期和时间：" << dt << now << endl;
 
   // 把 now 转换为 tm 结构
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "UTC 日期和时间："<< dt << endl;
    return 0;
}