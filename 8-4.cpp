//
// Created by Ya Nan on 2018/6/10.
//

//编写函数，以读模式代开一个文件，将内容读入到一个string的vector中，将每一行作为一个独立的元素存于vector中。
//练习了文件输入和流的逐行输入，使用迭代器遍历容器中的元素。


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ifstream in("/Users/yanan/pi_digits.txt");//打开文件
    if(!in){
        cerr<<"wtf:"<<strerror(errno)<<'\n';
        return  -1;
    }
    string line;
    vector<string> words;
    while(getline(in,line)){
        words.push_back(line);//从文件中读取一行添加到vector中
         }
    in.close();//输入完毕，关闭文件
    vector<string>::const_iterator it = words.begin();//迭代器
    while (it !=words.end()){//遍历vector
        cout<<*it<<endl;//输出vector中的元素
        ++it;
    }
return 0;
}
