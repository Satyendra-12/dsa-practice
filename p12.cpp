#include<iostream>
using namespace std;
// D 
// C D
// B C D
// A B C D

int main(){
    int i=1, n=4;
    
    while(i<=n){
        char ch ='A'+n-i;
        int j =1;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}