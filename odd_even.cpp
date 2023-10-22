#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    cout << n << " " << endl;
    if ((n&1) == 0){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
    return 0;
}