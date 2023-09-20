#include<iostream>
using namespace std;
int main(){
  //  int age;
//     cout<<"enter the age"<<endl;
//     cin>>age;
//     if(age>=18){
//         cout<<"you can vote"<<endl;
//     }
//     else{
//         cout<<"you cannot vote"<<endl;
//     }
//      return 0;
int score;
cout<<"enter the score"<<endl;
cin>>score;
if(score>=90){
    cout<<"'A'grade"<<endl;
}
else if(score>=80){
    cout<<"'B'grade"<<endl;
}
else if(score>=60){
    cout<<"'c'grade"<<endl;
}else if(score>=40){
    cout<<"'D'grade"<<endl;
}
else{
    cout<<"fail"<<endl;
}
return 0;
}