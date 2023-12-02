#include<iostream>
//konsi file include krte h ??conio?are nahi yrr limits.hyes
#include<limits.h>
using namespace std;
void bubblesort(int arr[],int num){   
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                //sun pass by addres kr            
            }
            
        }
    
    }}
int main(){
    int arr[6]={2,4,5,3,1,6};
    int num=6;
    bubblesort(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";//ooye aisi print hoga array?

    }
    return 0;
}