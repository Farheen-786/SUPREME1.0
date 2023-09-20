#include <iostream>
using namespace std;
 
 void arrayshiftby1(int arr[],int num){
    int temp=arr[num-1];
    for(int i=num-1;i>0;i--){
            arr[i] = arr[i-1];
             }
             arr[0]=temp; 
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 }
 
int main(){
    int arr[6]={2,5,8,4,8,7};
    int num=6;
    arrayshiftby1(arr,num);
    return 0;
}