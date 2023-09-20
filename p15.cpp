#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<(i+1);j++){
            cout<<j;
        }
        cout<<endl;
}
for(int k=0;k<n;k++){
    for(int j=1;j<=(n-k);j++){
        cout<<j;
    }
    cout<<endl;
}
}