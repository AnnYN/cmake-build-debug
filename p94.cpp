//
// Created by Ya Nan on 2018/5/28.
//
//change the first word to all uppercase

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s("hellow world!");
    for (decltype(s.size()) index =0;
    index !=s.size() && !isspace(s[index]);++index)
        s[index] = toupper(s[index]);
    cout<<s<<endl;
}
