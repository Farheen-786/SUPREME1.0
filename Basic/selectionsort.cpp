#include<iostream>
#include<limits.h>
using namespace std;
void selectionsort(int arr[],int num){   
    for(int i=0;i<num-1;i++){
        int minindex=i;
        for(int j=i+1;j<num;j++){
            if(arr[j]<arr[minindex]){
              minindex=j;
                   
            }
            
        }
        swap(arr[i],arr[minindex]);
    
    }}
int main(){
    int arr[6]={2,4,5,3,1,6};
    int num=6;
    selectionsort(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}
#include <iostream>
using namespace std;
 
 
