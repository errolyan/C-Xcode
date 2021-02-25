//
//  main.cpp
//  005_recursion
//
//  Created by YanErrol on 2020/9/1.
//  Copyright © 2020 YanErrol. All rights reserved.
//

#include <iostream>
using namespace std;

double factorial(int num){
    if(num <= 0)
        return 1;
    return num * factorial(num-1);
}

double fibonacci(int num){
    if(num <= 1)
        return num;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

double hanoi(int num){
    if(num <= 1)
        return 1;
    else
        return 2 * hanoi(num - 1) + 1;
}


double MCD(int x, int y){
    if( y <= 0 )
        return x;
    else
        return MCD(y, x % y);
}

string reverse(string str){
    
    string newReverse="";
    for( long i = str.length(); i>=0; i--){
        newReverse += str[i];
    }
    
    return newReverse ;
}


string reverseR(string str){
    
    if (str.length() <= 0)
        return "";
    else
    {
        char lastChar = str[str.length()-1];
        str.erase(str.length()-1);
        string newReverse = reverseR(str);
        return lastChar+newReverse;
    }
}

void showExample(){
    
    
    for(int i = 0; i < 10 ; i++){
        cout << factorial(i) << endl;
    }
    
    for(int i = 0; i < 10 ; i++){
        cout << fibonacci(i) << endl;
    }
    
    for(int i = 0; i < 10 ; i++){
        cout << hanoi(i) << endl;
    }
    
    for(int i = 0; i < 10 ; i++){
        cout << MCD(i * 2 , i * 3) << endl;
    }
    
    string list [] = {"Reverse", "Victor", "Bolinches"};
    for(int i = 0; i < 3 ; i++){
        cout <<  list[i] << " - " << reverse(list[i])<< endl;
    }
    
    for(int i = 0; i < 3 ; i++){
        cout <<  list[i] << " - " << reverseR(list[i])<< endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    showExample();
    std::cout << "Hello, World!\n";
    std::cout << "Class template is a template used to generate template classes.\n";
    std::cout << "Template class is an instance of a class template.\n";
    return 0;
}
