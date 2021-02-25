//
//  support.cpp
//  extern存储类
//
//  Created by YanErrol on 2021/1/29.
//

#include <iostream>
 
extern int count;
 
void write_extern(void)
{
   std::cout << "Count is " << count << std::endl;
}
