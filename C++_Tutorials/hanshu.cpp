# include<iostream>
using namespace std;

int max(int num ,int num2);

int main()
{
    int a = 200;
    int b = 100;
    int c;

    c = max(a,b);
    cout << "max number is:" << c << endl;
    return 0;

}

int max (int a,int b=1000)
{
    int ret ;
    if (a > b)
        ret = a;
    else
        ret = b;
    return ret;
}