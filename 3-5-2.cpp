//
// Created by Ya Nan on 2018/5/28.
//连接多个字符串并以空格连接

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cont = 'y';
    string s ,result;
    cout<<"请输入第一个字符串: "<<endl;
    while(cin>>s)
    {
        if(!result.size())
        result+=s;//第一个拼接的字符串前面不加空格
        else
            result = result + " " +s;//之后拼接的每一个字符串前面加空格
        cout<<"是否继续（y or n）?"<<endl;
        cin>>cont;
        if(cont =='y'||cont=='Y')
            cout<<"请输入下一个字符串："<<endl;
        else
            break;
    }
    cout<<"拼接后的字符串是： "<<result<<endl;
    return 0;
}
