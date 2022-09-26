#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[], int n){
    int maxprofit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
              maxprofit += arr[i]-arr[i-1];
        }

}
return maxprofit;
}
int main(){
    int arr[8]={5,2,6,1,4,7,3,6};
    int ans = maxprofit(arr , 8);
    cout<<ans<<"";
    return 0;
}