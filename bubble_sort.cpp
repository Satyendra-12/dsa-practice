#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
          }
        }
    }
}
void  print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";    
         }
}

int main(){
    int arr[] = {3,2,6,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print(arr,n);
    return 0;
}


// o(n)
