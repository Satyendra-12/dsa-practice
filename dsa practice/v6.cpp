#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4,b=2;
    // find b-a
    a = ~a;
    a = a+1;
    int ans = a+b;
    cout<<ans;
    return 0;
}