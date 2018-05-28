//
// Created by Ya Nan on 2018/5/28.
//

#include <iostream>
#include <string>

using namespace std;

int main()//使用getline一次读入一整行，按回车键结束
{
    string line;
    cout<<"请输入您的字符串，可以包括空格： "<<endl;
    while(getline(cin,line))
        cout <<line<<endl;
    return 0;
}
