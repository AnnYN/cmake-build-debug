//
// Created by Ya Nan on 2018/5/31.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> vString;
    string s;
    char cont ='y';
    cout<<"请输入第一个词： "<<endl;
    while(cin>>s){
        vString.push_back(s);//向vector中添加元素
        cout<<"您要继续吗(y or n)?"<<endl;
        cin>>cont;
        if(cont !='y'&&cont != 'Y')
            break;
        cout<<"请输入下一个词： "<<endl;

    }
    for(auto &mem:vString)//使用for循环遍历vstring中的每个元素
    {
        for (auto &c:mem)//使用for循环遍历men中的每个字符
            c =toupper(c);//改为大写字母形式
        cout<<mem<<endl;
    }

    return  0;
}