#include <iostream>
using namespace std;
int unique(int arr[],int num){
    int ans=0;
       for (int i = 0; i < num; i++)
    {
        ans=arr[i]^ans;
    }
    return ans;
}
 
 
int main(){
    int arr[]={10,20,6,20,10,7,6};
    int num=7;
    int ans=unique(arr,num);
    cout<<ans;
    return 0;
}