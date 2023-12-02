#include<iostream>//set kth bit
using namespace std;
int setkthbit(int n,int k){
    int mask=1<<k;
    int ans=n|mask;
    return ans;
}
int main(){
   int ans2= setkthbit(15,3);
   cout<< ans2;
}