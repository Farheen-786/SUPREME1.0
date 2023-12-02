#include<iostream>//print even no using bit wise xor operator
using namespace std;
bool printEven(int n){
    if((n^1)==(n+1)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int ans= printEven(5);
    cout<<"if even return true or 1 -->"<<ans;
}