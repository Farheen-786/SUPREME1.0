#include<iostream>//function print all prime no 1 to n 
using namespace std;
bool printprime(int num){
    for(int i=2;i<=num;i++){
    if(num%i==0){
        return false;
    }
    else{
        return true;
    }
    }
}
int main(){
   int num;
   cin>>num;
   for(int i=2;i<=num;i++){
      bool isiPrime=printprime(i);
   if(isiPrime){
      cout<<" ";
   }

   }
}

    