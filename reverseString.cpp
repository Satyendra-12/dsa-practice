#include<iostream>
using namespace std;

string reversStr(string str){
    int n = str.length();
    while(n>=0){
    cout<<str[n-1];
    n--;
    }
}

int main(){
    string s = "hello world";
    reversStr(s);
    return 0;
}