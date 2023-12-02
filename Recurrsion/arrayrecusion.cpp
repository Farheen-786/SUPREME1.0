//array print with the help of recursion
#include <iostream>
using namespace std;
void arrayrecursion(int arr[],int size,int index){
    if(index>=size){
        return ;
    }
    cout<<2*arr[index]<<" ";
    arrayrecursion(arr,size,index+1);
}
 
 
int main(){
    int arr[5]={10,20,40,50,60};
    int size=5;
    int index=0;
    arrayrecursion(arr,size,index);
    return 0;
}