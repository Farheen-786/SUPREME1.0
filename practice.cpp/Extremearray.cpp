#include <iostream>
using namespace std;
void reverse(int arr[],int num){
    int right=0;
    int left=num-1;
    while(right<=left){
        if(right==left){
            cout<<arr[right];
        }
        else
       { cout<<arr[right]<<" ";
        cout<<arr[left]<<" ";}
        right++;
        left--;
    }
    
}
 
 
int main(){
    int arr[10]={10,20,30,40,50,60,70};
    int num=7;
    reverse(arr,num);
    return 0;
}