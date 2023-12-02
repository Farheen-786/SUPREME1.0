#include<iostream>//search minumum num in an array  using function 
using namespace std;
void reversearray(int arr[], int size){//traversing method
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={7,8,4,4,7};
    int size=5;
    reversearray(arr,size);
}