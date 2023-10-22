#include<bits/stdc++.h>
using namespace std;

// 1 
// 2 1
// 3 2 1
// 4 3 2 1

int main() {
    int i=1, n = 4;
  
    while(i<=n){
        int j=1;
        int count =i;
        while(j<=i){
        cout<<count<<" ";
        count--;
        j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}