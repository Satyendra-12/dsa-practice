#include<iostream>
using namespace std;
// A 
// B B
// C C C
int main(){
    int i=1, n=3;
    
    while(i<=n){
        char ch ='A'+i-1;
        int j =1;
        while(j<=i){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}