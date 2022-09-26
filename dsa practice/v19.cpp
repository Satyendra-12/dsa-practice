#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[], int n){
    int maxprofit=0;
    int minibuy=arr[0];
    for(int i=0;i<n;i++){
        minibuy = min(minibuy,arr[i]);
        int profit = arr[i]-minibuy;
        maxprofit = max(profit,maxprofit);

}
return maxprofit;
}
int main(){
    int arr[5]={5,2,6,1,4};
    int ans = maxprofit(arr , 5);
    cout<<ans<<"";
    return 0;
}