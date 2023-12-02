#include<iostream>
using namespace std;
void countonezero(int arr[],int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
    }
    cout<<"total zero count:"<<zerocount<<endl;
    cout<<"total one count:"<<onecount<<endl;
}
int main(){
    int arr[10]={0,1,0,1,1,0,1,0,0,1};
    int size=10;
    countonezero(arr,size);

}