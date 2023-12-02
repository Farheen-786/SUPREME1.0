#include <iostream>
using namespace std;

void zerosfirst(int arr[], int num)
{
    int zerocount = 0;
    int onescount = 0;
    int index = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }
        else
        {
            onescount++;
        }
    }

    while (zerocount > 0)
    {
        arr[index] = 0;
        index++;
        zerocount--;
    }
      while (onescount > 0)
    {
        arr[index] = 1;
        index++;
        onescount--;
    }
   // index variable liya h jo array ko traverse krega starting with 0 index
  

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}

//using pointer
//pointer kuch nahi bs do variables hain jo ki ek hi array k elements ko point krre h  
void solve(int arr[], int num){
    int j = 0;//pointer number one h hamar j and second h i 
    for (int i = 0; i < num; i++)
    {
        //ab humne loop chala k i k through har element ko access kra or dekha 
        //if agar wo 1 nahi h toh use starting m lao coz wo definately 0 hoga
        //or starting m lane k liye hamare pass index hona chahiye isilye yeh j pointer use kra h 
        //jb bhi swap krre ho toh j increment krre h kyuki uske baad hi toh next element ko swap krenge.

        if (arr[i] !=1 )
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int num = 10;
    int arr[10] = {0, 1, 0, 0, 1, 1, 0, 1, 0, 1};
    // zerosfirst(arr, num);
    solve(arr, num);
    return 0;
}