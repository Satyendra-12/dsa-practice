#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pivotindex = s+count;
    swap(arr[pivotindex],arr[s]);
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        while(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quickSort(int arr[], int s, int e){
if(s>=e){
    return;
}
int p = partition(arr,s,e);
quickSort(arr,s,p-1);
quickSort(arr,p+1,e);
}
int main(){
    int arr[6]={48,55,585,953,9373,354};
    int n=6;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}