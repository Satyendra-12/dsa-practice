#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={5,2,5,3,3};
    int res=0;
    for(int i=0;i<5;i++){
        res=res^arr[i];
    }
    cout<<res<<" "<<endl;
    return 0;
}