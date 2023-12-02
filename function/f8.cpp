#include<iostream>//function factorial of a num
using namespace std;
void printfactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}
int main(){
    printfactorial(4);
}