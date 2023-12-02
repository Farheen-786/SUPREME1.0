#include <iostream>
using namespace std;
void unique(int arr[],int num){
    int ans=0;
       for (int i = 0; i <= num/2; i++)
    {
        for(int j=num/2;j<=num/2;j++){

      cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }

}
 
 
int main(){
    int arr[]={10,20,30};
    int num=3;
    unique(arr,num);
    return 0;
}