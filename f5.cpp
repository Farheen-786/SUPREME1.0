#include<iostream>//add only even no 
using namespace std;
void Sumeven(int n){
    int sum=0;
    for(int i=2;i<=n;i+2){
        if (i%2==0)
        {
        sum=sum+i;
            
        }
        
    }
    cout<< sum<<endl;
}
int main(){
    Sumeven(10);
}