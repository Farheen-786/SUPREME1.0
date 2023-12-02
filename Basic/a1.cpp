#include<iostream>
using namespace std;
int main(){
    //array creation
    // char ch[5];
    // bool b[5];
    // long num[5];
    // cout<<"array creation successfully"<<endl;
    //address of operator
    // int arr[10];
    // cout<<" base adress of arr"<<&arr;// both are same &arr and arr
    // cout<<"base adress of arr"<<arr;
   // cout<<"size of array "<<sizeof(arr);
  //initialisation
//    int arr[]={1,2,3,4,5,7,8};
//    int brr[5]={1,3,4,5};
//    int crr[5]={2,4};
//    int drr[2]={1,2,33,56,4};
   //indexing
//    int arr[5]={5,6,7,2,3};
//    int n=5;
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//taking input in an array and print array
int arr[5];
int n=5;
for(int i=0;i<n;i++){
    cout<<"enter the value at index "<<i<<":";
    cin>>arr[i];
}
cout<<"printing the array"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
   }
//    cout<<arr[0];
//     cout<<arr[1];
//      cout<<arr[2];
//      cout<<arr[3];
//       cout<<arr[4];

