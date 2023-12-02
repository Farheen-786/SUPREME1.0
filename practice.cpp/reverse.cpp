#include <iostream>
using namespace std;
void reverse(int arr[],int num){
    int right=0;
    int left=num-1;
    while(right<left){
        swap(arr[right],arr[left]);
        right++;
        left--;
    }
    for (int  right= 0; right < num; right++)
    {
       cout<<arr[right]<<" ";//here we also can take i instead of right
    }
    
}
 
 
int main(){
    int arr[10]={10,20,30,40,50,60,70};
    int num=7;
    reverse(arr,num);

    
    return 0;
}