#include<iostream>
using namespace std;//soild half diamond
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<(i+1);j++){
            cout<<"*";
        }
        cout<<endl;
}
for(int k=1;k<n;k++){
    for(int j=1;j<=(n-k);j++){
        cout<<"*";
    }
    cout<<endl;
}
}