#include<iostream>
using namespace std;

int main(){
    // input no. of rows 
    int rows;
    cin>>rows;
    // start loop from 1 to rows
    for(int i=rows ; i>=1;i--){
        for(int j = 1 ;j<=i ; j++ ){
            cout<<"*";
        } 
        cout<<endl;
    }
    return 0;
}