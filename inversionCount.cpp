#include<bits/stdc++.h>
using namespace std;
int invCount(int arr[], int n){
    int count = 0;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1   ; j<=n ; j++){
            if(arr[j]>arr[j+1])
            count++;
        }
    }
    return count;
}
int main(){
    int arr[5] = {20,5,6,3,1};
  
    int ans = invCount(arr, 5);
    cout<<ans;
    return 0;
}