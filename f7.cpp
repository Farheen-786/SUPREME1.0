#include<iostream>///find area of circle
using namespace std;
float areacircle(int rad){
    float area=0;
    area=3.14*rad*rad;
cout<<area;
}

int main(){
    int rad;
    cin>>rad;
  float ans= areacircle(rad);
  cout<<ans;
}