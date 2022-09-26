#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp= arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
       }
}
int main(){
    int arr[8]={4,2,6,3,8,4,8,6};
    insertionsort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}