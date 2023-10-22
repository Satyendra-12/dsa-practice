// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int n;
// //     cout<<"enter a number"<<endl;
// //     cin>>n;
// //     cout<<n<<endl;
// //     for(int i=2;i<n;i++){
// //         if(n%i==0){
// //             cout<<"no is not prime"<<endl;
// //             return 0;
// //         }
// //     }
// //     cout<<"no is prime"<<endl;
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

//  int main(){
//     int n , ans;
//     cout<<"enter a number"<<endl;
//     cin>>n;
//     cout<<n<<endl;
//     ans = fact(n);
//     cout<<ans;
//     return 0;

//  }

// #include <iostream>
// #include <math.h>
// using namespace std;
// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(n); i++)
//     {

//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cout << "enter a number" << endl;
//     cin >> n;
//     cout << n << endl;
//     int ans = isPrime(n);
//     if (ans == 1)
//     {
//         cout << "Prime" << endl;
//     }
//     else
//     {
//         cout << " number is not Prime" << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void printPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
             cout << i << " "<<endl;
        }
    }
}
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    cout << n << endl;
    printPrime(n);
    return 0;
   
}


