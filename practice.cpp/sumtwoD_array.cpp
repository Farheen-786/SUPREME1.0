#include<iostream>
using namespace std;
//column wise sum
// void twod_array(int arr[][3],int row,int col){
//     for(int i=0;i<col;i++){
//     int sum=0;
//         for(int j=0;j<row;j++){
//                sum+=arr[j][i];

//         }
//         cout<<sum<<endl;
//     }
// }
 
 
// int main(){
//     int arr[3][3]={
//     {1,2,3},
//     {2,4,5},
//     {5,6,7}
//     };
//     int row=3;
//     int col=3;
//     twod_array(arr,row,col);
//     return 0;
// }
//diagonal sum
void twod_array(int arr[][3],int row,int col){
    int sum=0;
        for(int i=0;i<row;i++){
               sum+=arr[i][i];

        }
        cout<<sum<<endl;
}
 
int main(){
    int arr[3][3]={
    {1,2,3},
    {2,4,5},
    {5,6,7}
    };
    int row=3;
    int col=3;
    twod_array(arr,row,col);
    return 0;
}