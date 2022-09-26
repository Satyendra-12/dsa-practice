#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,ans=0;
    cin>>n;
    num=n;
    while(n!=0){
        int digit=n%10;
        ans = (ans*10)+digit;
        n = n/10;
    }
    if(ans==num){
        cout<<"no is palindrom"<<endl;
    }
    else{
        cout<<"no is not palindrom"<<endl;
    }
    return 0;
}