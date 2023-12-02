#include <iostream>
using namespace std;
 
 
int main(){
    //yaha pr array ka name h arr
    int arr[8]={2,-5,-3,6,7,-5,-8,8};
    int num=8;
    int index=0;
    for(int i=0;i<num;i++){//i toh yaha auto ho ra h increment 
        if(arr[i]<0){
          swap((arr[index]),arr[i]);
          index++;//phle wala pointer increment krte h yaha 
          //mistake 
        }
    }

    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}