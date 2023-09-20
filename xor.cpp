#include<iostream>
using namespace std;
int uniquebit(int arr[],int num){
        int sum=0;
    for(int i=0;i<num;i++){
        sum=arr[i]^sum;
    }
    return sum;
}
int main(){
    int num=9;
    int arr[9]={2,5,10,9,10,2,3,5,9};
    int unique=uniquebit(arr,num);
    cout<<unique;
}