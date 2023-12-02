#include<iostream>//search minumum num in an array  using function
#include<limits.h>
using namespace std;
void minnumber(int arr[], int size){
    int minans=INT_MAX;
    int maxans=INT_MAX;//this line is used for find max no in an array
    for(int i=0;i<size;i++){
        if(arr[i]<minans){
            minans=arr[i];
        }
    }
    cout<<minans;
}
int main(){
    int arr[5]={2,8,5,9,4};
    int size=5;
    minnumber(arr,size);
}
//same as max  find  kr skte h 
 