#include <iostream>
using namespace std;
void uppercase(char ch[],int size){
    int index=0;
    while(ch[index]!='\0'){
        //check if lowecase,then covert into uppercase
        if(ch[index]>='a'&& ch[index]<='z'){
            ch[index]=ch[index]-'a'+'A';
        }
index++;
    }
   
    
    }
 
 
int main(){
   char ch[100];
   cout<<"enter the string :";
   cin.getline(ch,100);
   uppercase(ch,100);
   cout<<"after :";
   cout<<ch;
   
}