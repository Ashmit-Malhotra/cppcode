#include<iostream>
using namespace std;

int fact(int num1){
    int factorial = 1; 
    for(int i = 2 ; i <= num1 ; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int row ;
    cin>>row;

    for(int i = 0 ; i <= row ; i++ ){
        for(int j = 0 ; j <= i ; j++ ){
            int answrer = fact(i)/(fact(j)*fact(i-j));
            cout<<answrer<<" ";

        }
        cout<<endl;
    }    
    return 0 ;
    
}