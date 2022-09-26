#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={4,5,2,5,3,2};
    int res=0;
    for(int i=0;i<6;i++){
        res=res^arr[i];
    }
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<6;i++){
      if(arr[i]&1 == 1){
       v1.push_back(arr[i]);
    }
    else{
        v2.push_back(arr[i]);
    }
    }
    int ans = res;
    for(int i=0;i<v1.size();i++){
        ans= ans^v1[i];
    }
    cout<<ans<<" "<<endl;
    ans = ans^res;
    cout<<ans<<" "<<endl;

    return 0;
}