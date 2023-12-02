#include <iostream>
using namespace std;
void countprint(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<endl;
    countprint(n-1);
}
 
 
int main(){
    countprint(5);
    return 0;
}