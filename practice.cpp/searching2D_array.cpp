#include<iostream>
using namespace std;
void searching_array(int arr[][3],int row,int col){
    int target=30;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter the array values"<<i<<j<<" :";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(target==arr[i][j])
            {
                cout<<"found at index:"<<i<<j;
                break;    
            }
            else{
                cout<<"not found ";
               
            }
        }
               
        }
    }
    
    
    int main(){
        int arr[2][3];
        int row=2;
        int col=3;
        searching_array(arr,row,col);
    }