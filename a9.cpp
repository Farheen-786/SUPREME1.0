#include<iostream>//search minumum num in an array  using function(method 2nd)
#include<limits.h>
using namespace std;
void minnumber(int arr[], int size){
    int minans=INT_MAX;
    int maxans=INT_MAX;
    for(int i=0;i<size;i++){
    minans=min((arr[i]),minans);
        }
    cout<<minans;
}
int main(){
    int arr[5]={2,8,5,9,4};
    int size=5;
    minnumber(arr,size);
}