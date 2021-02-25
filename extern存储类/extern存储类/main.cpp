//
//  main.cpp
//  extern存储类
//
//  Created by YanErrol on 2021/1/29.
//

#include <iostream>

int count ;
extern void write_extern();
 
int main()
{
   count = 5;
   write_extern();
    return 0;
}
