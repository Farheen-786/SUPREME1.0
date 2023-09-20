#include<iostream>//linear searc by function and array
using namespace std;
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={1,3,6,5,8};
    int size=5;
    int target=8;
     int ans=linearsearch(arr, size,target);
     if(ans==1){
        cout<<"target found";
     }
     else{
        cout<<"not found";
     }
}