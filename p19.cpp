#include <iostream>
using namespace std;
//     1
//    121
//   12321
//  1234321


int main()
{
    int i = 1, n = 4;
    while (i <= n)
    {
        int space = n-i+1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        int count =1;
        while (j <= i)
        {
            cout <<count;
            count++;
            j++;
        }
        int p =1,count1 =i-1;
        while(p <=i-1){
            cout<<count1;
            count1--;
            p++;
        }
        cout << endl;
        
        i++;
    }
    return 0;
}