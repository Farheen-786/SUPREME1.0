#include <iostream>
using namespace std;
void replace(char ch[],int size){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;
}
}
 
int main(){
    char ch[100];
    cout<<"enter the string :";
cin>>ch;
replace(ch,100);
cout<<"output is: "<<ch;
    return 0;
}