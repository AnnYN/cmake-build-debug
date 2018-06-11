//
// Created by Ya Nan on 2018/6/11.
//

#include <iostream>
using namespace std;


int main(){
    int grade;
    cout<<"->请输入你的成绩: ";
        cin>>grade;
    if (grade<0||grade>100){
        cout<<"改成绩不合法"<<endl;
        return -1;
    }
    if(grade==100){
        cout<<"😃等级成绩是："<<"A++"<<endl;
        return -1;
    }
    if(grade<60){
        cout<<"the grade is: "<<"F"<<endl;
        return -1;
    }
    int iU=grade/10;
    int iT=grade%10;
    string score, level,lettergrade;
    if(iU==9)
        score ="A";
    else if(iU==8)
        score = "B";

    else if (iU==7)
        score ="C";
    else
        score ="D";
    if(iT<3)
        level ="-";
    else if (iT>7)
        level = "+";
    else
        level="";

    lettergrade =score +level;
    cout<<"the grade is: "<<lettergrade<<endl;
    return 0;



}