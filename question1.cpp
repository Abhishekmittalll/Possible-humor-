// wap to find area and perimeter of square
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the side =";
    cin>>num1;
    num2 =pow(num1,2);
    cout<<"the area of square="<<num2<<endl;
    cout<<"the peremeter of square="<<4*num1<<endl;
    return 0;
}