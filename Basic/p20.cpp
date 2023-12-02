#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cin >>n ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            char ch=j+1+'A'-1;
                cout << ch;
            }//jab tak A tak nhi phuchte tb tak print krenge
          for(char alphabet=ch;alphabet>'A';){
                alphabet=alphabet-1;
                cout<<alphabet;
            }
           cout<<endl;
        }
    }