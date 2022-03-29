#include<iostream>
using namespace std;
int main(){


    char grade ='A';
    string pharse ="giraffe academy";
    int age =60;
    double gpa = 3.9;
    bool ismale = true;

    cout<<gpa<<endl;
    cout<<pharse[2]<<endl;
    pharse[2] = 'E';
    cout<<pharse<<endl;
    cout<<pharse.find("E")<<endl;
    cout<<pharse.find("E",4)<<endl;
    cout<<pharse.substr(2,6)<<endl;


}