#include<iostream>//number is prime or not
using namespace std;
bool primenumber(int num){
    for(int i=2;i<=num;i++)
    if(num%i==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
   int ans=primenumber(7);
   cout<<ans;
}