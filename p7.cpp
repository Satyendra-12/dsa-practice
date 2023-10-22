#include<bits/stdc++.h>
using namespace std;

// AAAA
// BBBB
// CCCC
// DDDD

int main() {
    int i=1, n = 4;
  
    while(i<=n){
        int j=1;
        char ch ='A'+i-1;
        while(j<=n){
        cout<<ch;
        j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}