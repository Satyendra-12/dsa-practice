#include <iostream>
using namespace std;

int main()
{
    int i = 1, n = 5;
    while (i <= n)
    {
        int j = 1;
        int count = 1;
        while (j <= n - i + 1)
        {
            cout << count;
            count++;
            j++;
        }
        int k = 1;
        while (k <= i - 1)
        {
            cout << "**";
            k++;
        }

        int s = 1;
        int count1 = n - i + 1;
        while (s <= n - i + 1)
        {
            cout << count1;
            count1--;
            s++;
        }

        cout << endl;

        i++;
    }
    return 0;
}