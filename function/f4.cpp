#include<iostream>//sum all digit up to n
using namespace std;
int printsumdigit(int n){//here we use int ie we return value sum 
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
return sum; 
}
int main(){
   int ans=printsumdigit(4) ;
   cout<< ans;
}