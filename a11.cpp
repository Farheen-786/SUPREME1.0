#include<iostream>//search minumum num in an array  using function
using namespace std;
void reversearray(int arr[], int size){//reverse using function
   int left=0;
   int right=size-1;
   while(left<=right){
    swap(arr[left],arr[right]);
    left++;
    right--;
   }
   for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
   }
}
int main(){
    int arr[10]={7,8,4,4,7,7,5,3,12,87};
    int size=10;
    reversearray(arr,size);
}