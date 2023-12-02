#include <iostream>
#include<stack>
using namespace std;
int main(){
    //creation--->>
    stack<int>st;
    cout<<"before pop";
    //insertion-->>
    st.push(10);
    st.push(67);
    st.push(29);
    cout<<"size is"<<st.size()<<"\n";
    cout<<"top element"<<st.top()<<endl;
    cout<<"after pop";
    //deletion-->>
    st.pop();
    cout<<"size is"<<st.size()<<"\n";
    cout<<"top element"<<st.top();
    if(st.empty()){
        cout<<"stack is empty:";
    }
    else {
        cout<<"not empty"; 
    }
    return 0;
}