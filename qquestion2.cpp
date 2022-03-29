// swap to number with function
// #include<iostream>
// using namespace std;
// int swap(int a,int b){
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     cout<<"a="<<a<<"b="<<b<<endl;
// }
// int main(){
//     int a,b;
//     cout<<"enter the two number";
//     cin>>a>>b;
//     cout<<"a="<<a<<  "b="<<b<<endl;
//        swap(a,b);
//     cout<<"a="<<a<<  "b="<<b<<endl;
// }

// ***********************************************************************************************************//
#include<iostream>
using namespace std;


int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int even = 0;
    int odd =0;
    int i=0;
    for(i=1;i<=11;i++){
        if(arr[i]%2==0)
            even=even+1;
        else
        odd=odd+1;
    // cout<<even<<endl;
    // cout<<odd<<endl;
    }
    // cout<<arr[4]<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
}