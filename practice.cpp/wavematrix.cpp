#include <iostream>
#include<vector>
using namespace std;
void waveprintmatrix(vector<vector<int>>v){
    int row=v.size();
    int col=v[0].size();
    for(int i=0;i<col;i++){
        //even no-->>top to bottom
        if((i&1)==0){
            for(int j=0;j<row;i++){
              cout<<v[j][i]<<" ";
            }
        }
        else{
            // odd no-->>bottom to top
            for(int j=col-1;j>=0;j--){
            cout<<v[j][i]<<" ";
            }
        }
    }
}
int main(){
    vector <vector<int>>v ={
       {1,3,4},
       {2,3,7},
       {7,8,9}};
       waveprintmatrix(v);
    return 0;
}