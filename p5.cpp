#include<bits/stdc++.h>
using namespace std;

// 1 
// 2 2  
// 3 3 3
// 4 4 4 4

int main() {
    int i=1, n = 4;
    while(i<=n){
        int j=1;
        while(j<=i){
        cout<<i<<" ";
        
        j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}