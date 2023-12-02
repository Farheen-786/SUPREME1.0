#include <iostream>
#include <vector>
using namespace std;

void occurence(int *arr,int size,int index,vector<int> &ans,int target){
    if (index >= size)
    {
        return;
    }
    
    if (arr[index] == target)
    {
        ans.push_back(arr[index]);
    }
    occurence(arr,size,index+1,ans,target);
}
 
 
int main(){
    //print all occurence of target in array
    vector<int> ans;
    int arr[5]={2,78,8,2,7};
    int size=5;
    int index=0;
    int target = 2;
    occurence(arr,size,index,ans,target);
    cout<<"All Occurences are ";
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}