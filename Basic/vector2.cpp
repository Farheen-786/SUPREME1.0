#include <iostream>
#include <deque>
using namespace std;
 
 
int main(){
    deque<int> d;

    d.push_back(2);//peeche se
    cout<<"back m insert "<<endl;
    d.push_front(4);//aage se
    cout<<"front m insert "<<endl;
    d.push_front(8);//aage se
    cout<<"insert k baad"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_back();//peeche se
    // cout<<"back se delete "<<endl;
    // d.pop_front();//aage se
    // cout<<"front se delete "<<endl;
    // cout<<"delete k baad"<<endl;
    
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<d.empty()<<endl;//empty h ya nahi nahi p 0 hai toh 1
    d.erase(d.begin(),d.end()-2); //jaha s jaha tak k element delete krne h wo index bata do
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}