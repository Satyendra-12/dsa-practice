#include<bits/stdc++.h>
using namespace std;
void mergearray(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i] = arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[k++];
    }

    // merge 
 int index1=0;
 int index2=0;
 k=s;
 while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[k++]=first[index1++];
    }
else{
        arr[k++]=second[index2++];
    }
 }
 while(index1<len1){
    arr[k++]=first[index1++];
 }
 while(index2<len2){
    arr[k++]=second[index2++];
 }
}

void mergesort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    // left part
    mergesort(arr,s,mid);
    //right part
    mergesort(arr,mid+1,e);

    // merge array
    mergearray(arr,s,e);
}
int main(){
    int arr[8]={4,2,6,3,8,4,8,6};
    int n=8;
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}