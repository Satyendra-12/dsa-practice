#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}
int main(){
    int arr[8]={4,2,6,3,8,4,8,6};
    selectionsort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}