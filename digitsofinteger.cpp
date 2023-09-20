#include <iostream>
using namespace std;
void digitsofnumber(int num){
    while(num>0){
        int digit=num%10;
        cout<<digit<<endl;
        num=num/10;
    
    }
}
 
 
int main(){
    int num;
    cin>>num;
    digitsofnumber(num);
    return 0;
}