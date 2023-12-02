#include <iostream>
using namespace std;
bool palindrom(char ch[], int size)
{
    int index = 0;
    int length=0;
    int j = length- 1;
    
        while(ch[index]!='\0'){
        length++;
        index++;
        
    }
    cout<<length<<endl;
    
    while (index >= j)
    {
                if (ch[index] == ch[j])
                {
                    index++;
                    j--;
                    
                }
                else
                {
                    return false;
                }
            }
            return true;
        }
 int main()
{
    char ch[100];
    cout << "input string:";
    cin >> ch;
   bool ispalindrom= palindrom(ch, 100);
    if(ispalindrom){
        cout<<"palindrom";
    }
    else{
        cout<<"not palindrom";
    }
}
