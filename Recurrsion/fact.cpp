#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 1;
    }
    else
        {
         int fact=factorial(n-1);
        int ans=n*fact;
    return ans;
    }
}
 
 
int main(){
    cout<<factorial(5);
    return 0;
}