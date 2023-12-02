#include <iostream>
using namespace std;
#include<string.h> 
// class student{
//     int id ;
//     int age;
//     int nos;
//     string student;
//     void study(){
//         cout<<"study";//jb class khali hogi tb  compiler min 1byte size allocatee karega b/c min size in coding 1byte

//     }
//     void bunk(){
// cout<<"bunk";
//     }
//     void sleep(){
// cout<<"sleep";
//     }
// };
// int main(){
//     cout<<sizeof(student);
//     // student s1;
//     // student s2;
//     return 0;
// }
//ACESS MODIFIER-->>
class student{
    private:
    string gf;
    public:
    int id ;
    int age;
    int nos;
    string present;
    //ctor clas k ander cnstructor mandatory hota h by defalut khud add kr deta h 
    //default constructor assign garbage value
    student(){
        cout<<"student ctor called"<<endl;
    }
    Student(int id,int age,int nos,bool present,string gf){
        this->id;
        this->age;
        this->nos;
        this->present;
        this->gf;
        cout<<"student paremeterized ctor called";
    }
    void study(){
        cout<<"study";//jb class khali hogi tb  compiler min 1byte size allocatee karega b/c min size in coding 1byte

    }
    void bunk(){
cout<<"bunk";
    }
    void sleep(){
cout<<"sleep";
    }
    private:
    void chating(){
        cout<<"chating";
    }
};
int main(){
    cout<<sizeof(student);
    student s1;
     student s2(2,23,1,"chotabheem",0);
    //  s1.age=23;
    //  s1.nos=3;
    //  s1.student="good";
    // student s2;
    return 0;
}