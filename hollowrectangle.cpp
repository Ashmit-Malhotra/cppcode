#include<iostream>
using namespace std;

int main(){
// input rows and columns 
    cout<<"enter rows and columns ";
    int rows , columns;
    cin>>rows>>columns;
// for loop for rows 
    for(int i = 1 ; i <= rows;i++){
// for loop for columns 
    for (int j = 1 ; j<=columns;j++){
// check for 1st and last rows or 1st and last column 
    if (i==1 || i==rows || j ==1 || j == columns )
    {
        cout<<"*";
    }
// else print spaces 
    else{
        cout<<" ";
    }
    
    }
    cout<<endl;
    }
    return 0 ; 
}