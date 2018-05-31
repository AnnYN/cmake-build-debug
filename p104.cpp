//
// Created by Ya Nan on 2018/5/31.
//

#include <iostream>
#include <vector>





unsigned grade;
using namespace std;



int main(){
    vector<unsigned>  scores(11, 0);
    cout<<"please enter a number between 0 and 100:"<<endl;
    while(cin>>grade)
        if(grade<=100)
            ++scores[grade/10];
    for(auto e:scores)
        cout<<e<<endl;// 输出vector中的每一个元素
    return 0;
}
