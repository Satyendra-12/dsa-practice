#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n, int k){
    int s=0;
    int e = n-1;
   
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] < k){
             s =mid+1;
        }
        else{
            e =mid-1;
        }
    }
    return -1;

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int a=5;
    int index = binarySearch(arr,10,a);
    if(index!= -1){
        cout<<"element found at index: "<<index<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }
    return 0;
}