#include <iostream>
using namespace std;
int fabonacci(int n){
    if(n==0){
        return 0;
    }
     if(n==1){
        return 1;
    }
    int fab=fabonacci(n-1)+fabonacci(n-2);
    return fab;
    
}
 
 
int main(){
   cout<< fabonacci(7);
    return 0;
}