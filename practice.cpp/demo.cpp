#include <iostream>
using namespace std;
 
 
int main(){
    char ch[10];
    cin>>ch;
  //  cout<<"output is "<<ch;
  cout<<"enter the string"<<ch;
  for(int i=0;i<10;i++){
    cout<<"at index "<<i<<":"<<ch[i]<<endl;
  }
    return 0;
char temp=ch[6];
int value=(int)temp;
cout<<"print integer value"<<value<<endl;

}