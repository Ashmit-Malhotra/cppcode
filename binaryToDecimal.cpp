#include<iostream>
using namespace std ; 

int binarytodecimal(int x )
{
    int number = 0 ; 
    int y = 1 ;

    while(x>0){

        int lastterm = x%10;
        number += lastterm*y;
        y *= 2 ;
        x /= 10; 


    }
    return number ; 
}

int main()
{
    int a ; 
    cout<<"enter a number in binary ";
    cin>>a;

    cout<<binarytodecimal(a)<<endl;
}