#include<iostream>
#include<algorithm>
using namespace std ; 

int main(){
    int a , b , c , d ;
    a = -66 ;
    b = -9;
    c = -89 ;
    d = max(a, max(b,c));
    cout<<d;
    return 0 ;
}
