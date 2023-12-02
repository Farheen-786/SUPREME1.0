#include <iostream>
using namespace std;
void count0and1(int arr[],int size){
    int countzero=0;
    int countone=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0){
            countzero+=1;
        }
        else
        {countone+=1;
        }
    }
        cout<<"ones: "<<countone<<endl;
            cout<<"zero: "<<countzero;
    }
 
 
int main(){
    int arr[10]={0,1,1,0,0};
    int num=5;
    count0and1(arr,num);
    
    
    return 0;
}