//
// Created by Ya Nan on 2018/5/31.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> ivec;
    for (decltype(ivec.size()) ix =0 ;ix!=10;++ix)
    ivec.push_back(ix);//加入新的元素

    for (auto e:ivec)
        cout<<e<<endl;
    return 0;

}