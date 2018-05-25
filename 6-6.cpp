//
// Created by Ya Nan on 2018/5/25.


#include <iostream>
#include <cmath>
using namespace std;

double myABS(double val)
{
    if (val<0)
        return val*-1;
    else
        return val;
}

//use abs in math file
double myABS2(double val){
    return abs(val);
}


int main()
{
    double num;
    cout << "please input a number: ";
    cin>>num;
    cout<<num<<"num's absolute value is: "<<myABS(num)<<endl;
    cout<<num<<"num's absolute value is: "<<myABS2(num)<<endl;

    return 0;



}








