#include <iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"stack is overflow:";
            return;
        }
        else
       { 
        top++;
        arr[top]=data;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack is underflow:";
            return;
            }
            else{
        top--;
    }
    }
    bool isEmpty(){
        if(top==-1){
            cout<<"stack is empty:"<<endl;
            return true;
        }
        else false;

    }
    int gettop(){
        if(top==-1){
            cout<<"stack is empty :"<<endl;
            return -1;
        }
        else{
            return arr[top];
            
        }
    }
    int getsize(){
        return top+1;
        
    }
    //for print the stack
    void print(){
        cout<<"top :"<<top<<" \n";
        cout<<"gettop : "<<gettop()<<"\n";
        cout<<"stack :";
        for(int i=0;i<getsize();i++){
            cout<<arr[i]<<" ";
            cout<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack st(8);
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();
    st.push(45);
    st.print();
    st.pop();
    st.print();
    st.pop();
    st.print();
    st.pop();
    st.print();
    st.pop();
    st.print();
    return 0;
}