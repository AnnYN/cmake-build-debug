//
// Created by Ya Nan on 2018/5/25.
//
#include <iostream>
using namespace std;

int fact(int val)
{
    if (val<0)
        return -1;
    int ret = 1;
    for (int i = 1; i != val+1;++i)
        ret *=i;
     return ret;

}

int main()
{
    int num;
    cout<<" please input a number: ";
    cin >> num;
    cout << num << "the factorial of num is: "<<fact(num)<< endl;
    return 0;
}