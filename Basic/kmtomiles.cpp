#include<iostream>
using namespace std;
float KMtoMiles(float km){
    float _1kmmiles=0.621371;
    float miles=km* _1kmmiles;
    return miles;
}
int main(){
    float km;
    cout<<"tell me km"<<endl;
    cin>>km;
    float miles=KMtoMiles(km);
    cout<<"miles="<< miles;
}