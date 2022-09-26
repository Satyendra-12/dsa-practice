#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char op;
    cin>>a>>op>>b;
    switch(op){
        case '+': cout<<a<<" + "<<b<<" is "<<a+b;
        break;
        case '-': cout<<a<<" - "<<b<<" is "<<a-b;
        break;
        case '*': cout<<a <<"*"<< b<<" is "<<a*b;
        break;
        case '/': cout<<a<<" / "<<b<<" is "<<a/b;
        break;
        default :cout<<"invalid";
        break;
    }
    return 0;

}