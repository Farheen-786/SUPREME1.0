#include<iostream>
using namespace std;
int main(){
//without switch case
     int a,b,op;
    cout<<"enter the number";
    cin>>a>>b;
    cout<<"which operation to be perform ";
    cin>>op;
    int ans=0;
//     //0. add 1. sub 2.* 3.divide
//     if(op==0){
//         ans=a+b;
//     }
//     else if(op==1){
//         ans=a-b;
//     }
//     else if(op==2){
//         ans=a*b;
//     }
//     else if(op==3){
//         ans=a/b;
//     }
//     else{
//         cout<<"you have enter wrong operation";
//         return 0;
//     }

//     cout<<ans;
// }
switch(op){
    case 0:
    cout<<"add  ";
    ans=a+b;
    break;
    case 1:
    cout<<"sub ";
    ans=a-b;
    break;
    case 2:
    cout<<"mul ";
    ans=a*b;
    break;
    case 3:
    cout<<"div ";
    ans=a/b;
    break;
default:
cout<<"invalid opertation ";
return 0;
}
cout<<ans;
return 0;
}