#include<bits/stdc++.h>
using namespace std;
int main(){
    string st="abcbd";
    int s=0;
    int e=st.size()-1;
    while(s<e){
        if(st[s]!=st[e]){
            cout<<"string is not palindrom"<<endl;
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    cout<<"string is palindrom"<<endl;
    return 0;
}