#include<bits/stdc++.h>
using namespace std;

// 4 3 2 1 
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

int main() {
    int i=1, n = 4;
    while(i<=n){
        int j=n;
        while(j>=1){
        cout<<j<<" ";
        j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}