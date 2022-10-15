#include<bits/stdc++.h>
using namespace std ; 

int  hexadecimaltodecimal(string n  ){
    int   ans = 0 ; 
    int x1 = 1 ; 

    int  s=n.size();


    for(int i = s-1;i>=0;i--)
    {
        if(n[i]>= '0' && n[i]<'9')
        {
            ans += x1*(n[i]-'0');

        }
        else if (n[i]>='A' && n[i]<='F')
        {
            ans += x1*(n[i]-'A' + 10);

        }
        x1 *= 16;

    }
    return ans ; 


}

int main()
{
    string n ;
    cin>> n ;

    cout<<hexadecimaltodecimal(n)<<endl;
}