#include<iostream>
#include<algorithm>
using namespace std ; 

void pyth(int x , int y , int z  )
{
    int a,b,c ; 
    a = max(x , max(y,z));
    if(a==x)
    {
        b=y;
        c=z;

    }
    else if (a==y)
    {
        b = x ;
        c = z ; 
    }
    else{
        b = x ; 
        c = y; 
    }

    if(a*a==b*b+c*c){
        cout<<"pythogorian triplet";
    }
    else{
         cout<<"Non - pythogorian triplet";
    }

}

int main()
{
    int x,y,z;
    cout<<"enter three numbes";
    cin>>x>>y>>z;

    pyth(x,y,z);
    return 0 ; 
}
