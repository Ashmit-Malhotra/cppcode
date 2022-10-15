#include<iostream>
using namespace std;

int main(){
    // take rows and columns from user 
    cout<<"enter rows and columns ";
    int rows , columns;
    cin>>rows>>columns;
// loop for rows first 
    for(int i = 1  ; i <= rows;i++){
// loop for colums inside rows 
        for (int j = 1 ; j<=columns;j++)
        {cout<<" *";
       
    }
    cout<<endl; //for new line after 1 row 
    
    }
    return 0 ;
}