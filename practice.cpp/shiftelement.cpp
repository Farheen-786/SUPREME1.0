// shift element one time-->>
//#include <iostream>
// using namespace std;
// void shiftelement(int arr[],int num){
//     int temp=arr[num-1];
//     for (int i = num-1; i>=1; i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//         for(int i = 0; i <num; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
        
// }
 
 
// int main(){
//     int arr[10]={10,20,30,40,50};
//     int num=5;
//     shiftelement(arr,num);
//     return 0;
// }
//shift element 2 time-->
#include <iostream>
using namespace std;
void shiftelement(int arr[],int num){
    int temp1=arr[num-1];
    int temp2=arr[num-2];
    for(int i = num-1; i>=2; i--)
    {
        arr[i]=arr[i-2];
    }
    arr[0]=temp1;
    arr[1]=temp2;
        for(int i = 0; i <num; i++)
        {
            cout<<arr[i]<<" ";
        }
        
}
 
 
int main(){
    int arr[10]={10,20,30,40,50};
    int num=5;
    shiftelement(arr,num);
    return 0;
}