#include<iostream>
using namespace std;

int main(){
// input rows 
    int rows;
    cin>>rows;
//start loop for rows 
 for(int i=1;i<=rows;i++){
    for(int j= 1 ; j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
return 0 ; 
}