#include <iostream>
#include <vector>
using namespace std;
void evennumber(int arr[],int index,int size,vector<int> &ans){
    if(index>=size){
        return ;
    }
    if((arr[index]%2)==0){
        ans.push_back(arr[index]);
    }
    evennumber(arr,index+1,size,ans);
}
 
 
int main(){
    int arr[]={67,78,8,2,7};
    vector<int> ans;
    int size=5;
    int index=0;
    evennumber(arr,index,size,ans);
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;}