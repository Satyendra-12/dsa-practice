#include<iostream>
using namespace std;
// D 
// C D
// B C D
// A B C D

int main(){
    int i=1, n=3;
    
    while(i<=n){
        char ch ='A'+i-1;
        int j =1;
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}