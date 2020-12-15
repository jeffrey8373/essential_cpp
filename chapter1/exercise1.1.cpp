//
// Created by 孙浩 on 15/12/20.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_name;
    cout << "Please enter your name: ";
//    cin >> user_name;
    getline(cin,user_name);//可用来输入带空格的字符串
    cout << '\n' << "Hello " << user_name << "... and goodbye!";
    return 0;
}