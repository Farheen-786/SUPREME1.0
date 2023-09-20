#include <iostream>
using namespace std;
int numusingbit(int num){
    int sum=0;
    for(int i=0;i<num;i++){
        cout<<"enter digits";
        int digit;
        cin>>digit;
        sum=sum*10+digit;
        cout<<"number created so far:"<<sum<<endl;
            }
    return sum;
}
 
 
int main(){
    int num;
    cin>>num;
    int digit=numusingbit(num);
    cout<<digit;
    return 0;
}