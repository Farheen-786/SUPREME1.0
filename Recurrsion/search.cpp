// #include <iostream> //find target output false and true state
// using namespace std;
// bool searchtarget(int arr[],int target,int index,int size){
//     if(arr[index]>=size){
//         return false;
//     }
//     if(arr[index]==target){
//         return true;
//     }
//    bool ans= searchtarget(arr,target,size,index+1);
//    return ans;
// }
 
 
// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     int index=0;
//     int target=50;
//    cout<<"target is :"<< searchtarget(arr,size,index,target);
//     return 0;
// }
//find target return index else -1
#include <iostream>
using namespace std;
int  searchtarget(int arr[],int target,int index,int size){
    if(arr[index]>=size){
        return -1;
    }
    else if(arr[index]==target){
        return index;
    }
   searchtarget(arr,target,size,index+1);
   
}
 
 
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50;
    searchtarget(arr,target,size,index+1);
    return 0;
}