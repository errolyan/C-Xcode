# include <iostream>
using namespace std;

// 第一种定义常量的方法
# define LENGTH 10
# define WIDTH 5
# define NEWLINE "\n"

int main()
{
    // 第二种定义常量的方法
    const int  LENGTH1 = 10;
   const int  WIDTH1  = 5;
   const char NEWLINE1 = '\n';

    int area ;
    
    area = LENGTH * WIDTH;
    cout << "area:" << area;
    cout << NEWLINE;

    area = LENGTH1 * WIDTH1;
    cout << "area:" << area ;
    cout << NEWLINE1;
    return 0;
}