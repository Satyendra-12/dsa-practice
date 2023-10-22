#include <iostream>
using namespace std;

//     1
//    22
//   333
//  4444

int main()
{
    int i = 1, n = 4;
    int count = 1;
    while (i <= n)
    {
        int space = n-i+1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << count;
            j++;
        }
        cout << endl;
        count++;
        i++;
    }
    return 0;
}