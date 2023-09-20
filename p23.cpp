#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }    
        for(int j=0;j<(i+1);j++){
      cout<<j+1;    
        }
        for(int k=i;k>=1;k--){
            cout<<k;
        }
    cout<<endl;
    }
}
