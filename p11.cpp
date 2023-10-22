#include<iostream>
using namespace std;
//A 
// B C
// C D E
// D E F G

int main(){
    int i=1, n=4;
    
    
    while(i<=n){
        char ch ='A'+i-1;
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