#include <iostream>
using namespace std;
 
 
void pairsofallbit(int arr[],int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
int main(){
    int arr[]={10,12,56};
    int num=3;
    pairsofallbit(arr,num);
    return 0;
}