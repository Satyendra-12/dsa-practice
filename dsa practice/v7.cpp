#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        int ans = n&(n-1);
        count++;
        n=n>>1;
    }
cout<<"total bits are "<<count<<endl;
return 0;
}