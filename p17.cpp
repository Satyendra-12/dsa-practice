#include <iostream>
using namespace std;

// 1111
//  222
//   33
//    4


int main()
{
    int i = 1, n = 4;
int count =1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout <<count;
           j++;
        }
        cout << endl;
        count++;
        i++;
    }
    return 0;
}