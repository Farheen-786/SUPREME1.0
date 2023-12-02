#include <iostream>
using namespace std;
//row wise access each element of 2d array
// void twod_array(int arr[][3],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//                cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
 
 
// int main(){
//     int arr[2][3]={{1,2,3},{2,4,5}};
//     int row=2;
//     int col=3;
//     twod_array(arr,row,col);
//     return 0;
// }
//column wise access
// void twod_array(int arr[][3],int row,int col){
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//                cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }
 
 
// int main(){
//     int arr[3][3]={{1,2,3},{2,4,5},{5,6,7}};
//     int row=3;
//     int col=3;
//     twod_array(arr,row,col);
//     return 0;
// }
//taking input in 2D array
void twod_array(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter the value at row index :"<<i<<"column index"<<j<<":";
               cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    int main(){
        int arr[3][3];
        int row=3;
        int col=3;
        twod_array(arr,row,col);
    }

 
