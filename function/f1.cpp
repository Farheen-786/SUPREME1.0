#include<iostream>
using namespace std;
int printMaximum(int num1,int num2,int num3){//here max is inbuild function which is used for find maxx no 
   int ans1=max(num1,num2);
   int finalans=max(ans1,num3);
   //cout<<"max no is"<<finalans;
   return finalans;
}
int main(){
   int max=printMaximum(5,2,9);
   cout<<"max no is"<<max;
}