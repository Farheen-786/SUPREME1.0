#include<iostream>//double of each array value
using namespace std;
int main(){
    int arr[10];
    int n=5;
    for(int i=0;i<n;i++){
        cout<<"enter the vlaue at index"<<i<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"value at "<<i<<":"<<2*arr[i];
        cout<<endl;
    }
}