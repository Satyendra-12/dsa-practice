#include<bits/stdc++.h>
using namespace std;
void powerset(string s,int i, string curr){
if(i==s.size()){
    cout<<curr<<" ";
    return;
}

powerset(s,i+1,curr+s[i]);
powerset(s,i+1,curr);

}
int main(){
    string s="abc";
    string curr=" ";
    powerset(s,0,curr);
    return 0;
}