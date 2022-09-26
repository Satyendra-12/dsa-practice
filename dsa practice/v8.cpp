#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int flag=1;
    for(int i=m;i<=n;i++){
         if(i==0 || i==1)
         continue;
         flag=1;
         for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                flag =0;
                break;
            }
         }
          if(flag ==1)
         cout<<i<<" ";
    }
    return 0;
}