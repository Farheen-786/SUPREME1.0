#include <iostream>
#include <string.h> 
using namespace std;
 
// int main(){
//     char ch[10];
// // cout<<"entter the vlues";
// //cin>>ch;
// cin.getline(ch,10);
// cout<<"character is"<<ch<<endl;
// // for(int i=0;i<10;i++){
// // cout<<"values of character"<<i<<" :"<<ch[i]<<endl;

// // }

// char temp=ch[1];
// int value=int(temp);
// cout<<"print integer value of  index"<<value;

  
// }
//length of character-->>
int lengthofstring(char ch[],int size){
    int length=0;
    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;

}
int main(){
    char ch[100];
    cout<<"enter the string";
    cin.getline(ch,100);//getline se space bhi include kar leta h isse hmari string next line pr  terminate hogi naki space se
    int len=lengthofstring(ch,100);
    cout<<"length is"<<len<<endl;
    cout<<"length is"<<strlen(ch);
}