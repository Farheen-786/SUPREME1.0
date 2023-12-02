#include <iostream>
#include <limits.h>
using namespace std;
void minimumnum(int arr[],int size){
    int min=INT16_MAX;
    int max=INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
   cout<<"min no"<<min;
   cout<<"max no"<<max;
    
}
 
 
int main(){
    int arr[10]={-20,34,76,3,8};
    int num=5;
    minimumnum(arr,num);
    return 0;
}