//
// Created by Ya Nan on 2018/6/11.
//

#include <iostream>

using namespace std;

int main(){
    int grade;
    cout<<"please input your grade: ";
    cin>>grade;
    if(grade<0||grade>100){
        count<<"the input is not right"<<endl;
        return -1;
    }
    if(grade==100){
        cout<<"the grade is : "<<"A++"<<endl;
        return -1;
    }
    if(grade<60){
        cout<<"The grade is : "<<"F"<<endl;
        return -1;
    }
   int iU=grade/10;
    int iT=grade%10;
    string score,level,lettergrade;
    score=(iU==9)? "A"
          :(iU==8)? "B"
           :(iU==7)? "C"
                   :"D";
    level=(iT<3) ? "-"
                 :(iT>7)?"+":" ";
    lettergrade=score+level;
    cout<<"The grade is: "<<lettergrade<<endl;
    return 0;



}
