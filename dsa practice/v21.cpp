#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[8]={4,2,6,3,8,4,8,6};
    bubblesort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}