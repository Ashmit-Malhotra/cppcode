#include<iostream>
using namespace std ; 

int decimaltobinary(int num ){
    int ans  = 0 ;
    int x = 1 ; 
     while (x<=num)
     {
        x *= 8 ;

     }
     x /= 8; 

     while(x>0){
        int lastdigit = num / x ;
        num -= lastdigit*x ;
        x/=8;
        ans = ans*10 + lastdigit;

     }
     return ans ; 
}

int main(){
    int n ;
    cin >> n ; 
    
    cout<<decimaltobinary(n)<<endl;
    return 0 ; 

}