#include <iostream>
using namespace std;
int main()
{
    //hollogram
    for (int i = 0; i < 3; i = i + 1)
    {
        if (i == 0 || i == 2)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int i = 0; i < 3; i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}
