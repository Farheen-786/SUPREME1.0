#include <iostream>
using namespace std;
int search(int arr[5],int target,int e,int s){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }
     if(arr[mid]<target){
        return search(arr,target,mid+1,s);
    }
    else{
        return search(arr,target,mid-1,s);
    }
}
 
 
int main(){
    int arr[5]={10,20,40,50,60}
    int size=5;
    int s=0;
    int e=size-1;
    int target=20;
    int ans=search(arr,target,e,s);
    if(ans!=-1){
        cout<<"found at index"<<ans;
    }
    else{
        cout<<"not found";
   
    }
}