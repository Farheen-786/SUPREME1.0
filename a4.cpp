#include<iostream>//sum of all arrays value
using namespace std;
int main(){
    int sum=0,n=5;
    int arr[5];
    for(int i=0;i<n;i++){
        cout<<"enter the value at index"<<i<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"sum all the values "<<sum;
}
