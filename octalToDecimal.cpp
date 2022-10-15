

#include<iostream>
using namespace std ;

int binaryToDecimal(int num ){
    int ans=0; 
int x = 1;
    while (num>0)
    {
    
    int lastdigit = num%10;
    ans  += x*lastdigit;
    x *= 8 ;
    num/=10 ; 

    } 
    return ans ; 
}


int main(){
    int a ;
    cout << "enter a number in binary ; ";
    cin >> a;

    cout << binaryToDecimal(a) << endl;
    
    return 0 ; 
}
