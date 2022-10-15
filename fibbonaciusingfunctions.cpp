#include<iostream>
#include<math.h>
using namespace std ;

void fibbonaci(int num1 ){

    int term1 = 0;
    int term2 = 1; 
    int endterm ; 

    for(int i = 1 ; i <= num1 ; i++){
        cout<<term1<<endl;
        endterm=term1+term2;
        term1 = term2;
        term2=endterm;

    }
    return;
 }
int main(){
    int a ; 
    cin>>a;
 fibbonaci(a);
    return 0 ; 
    }