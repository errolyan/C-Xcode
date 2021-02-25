# include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;
    c = a +b;
    cout << "c的值是"<< c <<endl;
    c = a - b ;
    cout << "c的值是" << c<< endl;
    c = a * b;
    cout << "c的值是"<< c <<endl;
    c = a / b ;
    cout << "c的值是" << c<< endl;
    c = a % b;
    cout << "c的值是"<< c <<endl;
    c = a++ - b-- ;
    cout << "c的值是" << c<< endl;
}