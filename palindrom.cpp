#include<bits/stdc++.h>
using namespace std;

// string isPalindrom(string s){
//     string p =s;
//     reverse(p.begin(), p.end());

//     if(p==s){
//         return "yes";
//     }
//     else{
//         return "no";
//     }
// }

string isPalindrom(string s){
    for(int i =0 ; i<s.length()/2; i++){
        if(s[i] != s[s.length()-i-1]){
            return "no";
        }
    }
    return "yes";
}

int main(){
    string s = "abdcba";
    cout<<isPalindrom(s);
    return 0;
}