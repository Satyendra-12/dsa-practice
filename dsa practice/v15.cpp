#include<bits/stdc++.h>
using namespace std;
void permutation(string s, int l, int r){
    if(l==r){
    cout<<s<<" ";
    return;
    }
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        permutation(s,l+1,r);
        swap(s[l],s[i]);
    }
}
int main(){
    string s= "abc";
    int l=0;
    int r=s.size()-1;
     permutation(s,l,r);
     return 0;
}