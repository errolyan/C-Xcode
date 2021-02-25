# include <iostream>

// 函数声明
void func (void);
static int count = 10;

int main()
{
    while (count--)
    {
        func();
    }
    return 0;
}

void fun(void)
{
    static int i = 5; // 局部静态变量
    i++;
    std::cout << "变量i为"<<i;
    std::cout << ",变量count为"<< count <<std::endl;
}
