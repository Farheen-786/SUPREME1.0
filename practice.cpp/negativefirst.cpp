#include <iostream>
using namespace std;
void negatiefirst(int arr[],int num){
        int j=0;
    for(int i=0;i<num;i++){
        //memory block jha pr negative no store kar rhe h 
            if(arr[i]<0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        for(int i=0;i<num;i++){
            cout<<arr[i]<<" ";
        }
        }

int main(){
    int arr[]={23,-7,12,-10,-11,40,60};
    int num=7;
    negatiefirst(arr,num);
}