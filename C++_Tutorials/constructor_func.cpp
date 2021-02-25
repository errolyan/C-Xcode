#include<iostream>
using namespace std;

class People{
public:
char  name ='A';
People(){
cout<<"what is your name?"<<endl;
}
People(int n){
cout<<"name is right"<<endl;
}
};
int main(){
People p1;
People p2(3);
People(2);
return 0;
}
