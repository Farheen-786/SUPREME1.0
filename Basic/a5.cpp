#include<iostream>//linear search 
using namespace std;
int main(){
    int a[5]={5,10,14,15,7};
    int n=3;
    int target=7;
    bool flag=0;//flage just like a indicator
    //0--> not found 
    //1--> found  
    for(int i=0;i<n;i++){
        if(a[i]==target){
            //found
            flag=1;
            break;
        }
        }
        if(flag==1){
            cout<<"found "<<endl;
        }
        else{
            cout<<"not found "<<endl;
    }
}