# include <iostream>
# include <cstring>
# include <string>

using namespace std;

int main()
{
    char greeting[6]={'h','e','l','l','o','\0'};
    cout << "Greeting message:"<< greeting<< endl;
    char str1[11]="hello";
    char str2[11]="Errol";
    char str3[11];
    int len;

    // 复制str1 到str3
    strcpy(str3,str1);
    cout<<"strcpy(str3,str1):"<< str3 << endl;

    // 拼接str1和str2
    strcat(str1,str2);
    cout<<"strcat(str1,str2):"<< str1 << endl;

    // 链接后str1的长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
 
    string str4 = "Hello";
    string str5 = "World";
    string str6;
    int  len1 ;
 
    // 复制 str1 到 str3
    str5 = str4;
    cout << "str5 : " << str5 << endl;
 
    // 连接 str1 和 str2
    str6 = str4 + str5;
    cout << "str4 + str5 : " << str6 << endl;
 
    // 连接后，str3 的总长度
    len1 = str4.size();
    cout << "str4.size() :  " << len1 << endl;
    
    return 0;
}