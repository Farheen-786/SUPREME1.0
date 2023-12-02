#include <iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st,int& pos,int& ans){
    if(pos==1){
        ans=st.top();
        cout<<"after "<<st.size()<<endl;
        return;
    }
    //1 case hm solve krenge 
    pos--;
    int temp=st.top();
    st.pop();
    //recursion
    solve(st,pos,ans);
    //bactrack
    st.push(temp);
}; 

    int Middl_Element(stack<int>&st){
        int size= st.size();
       if(st.empty()){
        cout<<"stack  is empty: ";
        return -1;
       }
       else{
        int pos=0;
        if(size & 1){
        pos=(size/2)+1;
        }
        else{
            pos=size/2;
        }
        int ans=-1;
        solve(st,pos,ans);
        return ans;
       }
    }
    int main(){
        stack<int>st;
        st.push(50);
        st.push(78);
        st.push(67);
        st.push(89);
        cout<<"before "<<st.size();
        int mid=Middl_Element(st);
        cout<<"middle element "<<mid<<endl;
        return 0;
    }

  //  {
//     string skr="hellofarheen";
//     stack<char>st;
//     for(int i=0;i<skr.length();i++){
//         st.push(skr[i]);
//         //char ch=skr[i];
//        // st.push(ch);
//     }
//     cout<<endl;
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
//     cout<<endl;
    
//     return 0;
// }