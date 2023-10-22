#include<bits/stdc++.h>
using namespace std;
// void selection_sort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[minIndex],arr[i]);
//     }
// }
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
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
    selection_sort(arr,n);
    print(arr,n);
    return 0;
}


// o(n)
