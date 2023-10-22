#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
return -1;
}
int main(){
    int arr[10]={4,2,5,4,4,5,3,8,9,1};
    int a=5;
    
    int index = linearSearch(arr,10,a);
    if(index!= -1){
        cout<<"element found at index: "<<index<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }
    return 0;
}