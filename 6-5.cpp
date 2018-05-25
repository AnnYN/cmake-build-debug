//
// Created by Ya Nan on 2018/5/25.
//

#include <iostream>
using namespace std;

unsigned myCnt()
{
    static  unsigned iCnt = -1;
    ++iCnt;
    return iCnt;
}

int main()
{
    cout<<"please input anything to continue"<<endl;
    char ch;
    while(cin>>ch){
        cout<<"the number of callings of function myCnt()"<<myCnt()<<endl;
    }
    return 0;

}