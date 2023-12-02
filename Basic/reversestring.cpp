#include <iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"enter the string:";
    cin>>ch;
    int index=0;
    int length=0;
    
        while(ch[index]!='\0'){
        length++;
        index++;
        
    }
    cout<<length<<endl;
    int i=0;
    int j=length-1;
while(i<j){

    char temp=ch[i];
    ch[i]=ch[j];
    ch[j]=temp;
    i++;
    j--;
}
cout<<ch;
    
    return 0;
}