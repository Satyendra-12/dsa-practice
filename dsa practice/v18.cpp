#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[], int n){
    // kaden's algo
    int currsum=0;
    int maxsum=0;
    for(int i=0;i<n;i++){
        currsum = currsum+arr[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    return currsum;
}
int main(){
    int arr[6]={2,-3,5,6,-1,-6};
    int ans=maxsum(arr,6);
    cout<<ans<<" ";
    return 0;
}