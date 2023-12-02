#include <iostream>
#include <limits.h>
using namespace std;
void searchminimum(int *arr,int &mini,int index,int size){

   if(index>=size){
      return;
   }  
   mini=min(mini,arr[index]);
   searchminimum(arr,mini,index+1,size);     
}
 
 
int main(){
    int arr[]={89,30,40,50};
    int size=4;
    int index=0;
    int mini=INT_MAX;
    searchminimum(arr,mini,0,size);
    cout<<"Minimum is :"<<mini;
    return 0;
}