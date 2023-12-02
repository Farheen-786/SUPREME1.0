#include <iostream>
using namespace std;
bool sortedarray(int arr[],int size,int index){
    if(index>=size){
        return true;
    }
 if(arr[index]>arr[index-1]){
    bool ans=sortedarray(arr,size,index+1);
        return ans;
    }
    else{
        return false;
    }
}
 
 
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=1;
    int isSorted=sortedarray(arr,size,index);
    if(isSorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}