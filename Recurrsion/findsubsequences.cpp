#include <iostream>
#include <string>
using namespace std;
// void findsubsequence(string str,string output,int index){
// if(index>=str.length()){
//     cout<<"output string is:"<<output<<endl;
//     return ;
//     }
//     char ch=str[index];
//     //we are include the substring of str[index]then,
//     output.push_back(ch);
//     findsubsequence(str,output,index+1);
//     ///we exclude the substring then,agr hm push baad m krte h to hme phir pop krne ki jrurat nhi pdegi
//     output.pop_back();
//     findsubsequence(str,output,index+1);
// }
 
 
// int main(){
//     string str="abc";
//     string output=" ";
//     int index=0;
//     findsubsequence(str,output,index); 
//     return 0;
// }
//if we want to store the values in vector and then print the vactor values--->>
#include <iostream>
#include<vector>
void findsubsequence(string str,string output,int index,vector<string>& ans){
if(index>=str.length()){
    ans.push_back(output);
    return;
    }
    char ch=str[index];
    //we are include the substring of str[index]then,
    output.push_back(ch);
    findsubsequence(str,output,index+1,ans);
    ///we exclude the substring then,agr hm push baad m krte h to hme phir pop krne ki jrurat nhi pdegi
    output.pop_back();
    findsubsequence(str,output,index+1,ans);
}
 
 
int main(){
    string str="abc";
    string output=" ";
    int index=0;
    vector<string> ans;
    findsubsequence(str,output,index,ans); 
    for(string s:ans){
        cout<<"->"<<s;
    }
    return 0;
}