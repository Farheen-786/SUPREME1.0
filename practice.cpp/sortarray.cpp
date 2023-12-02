#include <iostream>
#include <limits.h>
using namespace std;
void minimumnum(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       for(int j=0;j<size;j++){
        if(arr[j]>arr[i]){
        swap(arr[i],arr[j]);
        }
       }
    }
   for(int i=0;i<size;i++){
    cout<<arr[i];
   }
}
 
 
int main(){
    int arr[10]={0,1,1,1,0,0,1,0};
    int num=8;
    minimumnum(arr,num);
    return 0;
}