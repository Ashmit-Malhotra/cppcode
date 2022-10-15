#include<iostream>
#include<climits>
using namespace std ; 

int main()
{
    int n ; 
    cin>> n ;

    int arr[n];

    for(int i = 0 ; i < n ; i++ )
    {
        cin>>arr[i];

    }
    int ans = 2 ; 
    int current =  2 ; 
    int pd = arr[1]-arr[0];
    int i = 2 ;


    while(i<n)
    {
        if (pd==arr[i]-arr[i-1])
        {
            current++;

        }
        else 
        {
            current = 2 ;
            pd = arr[i]-arr[i-1];

        }
        ans = max(ans,current);
        i++;
    }
    cout<<ans<<endl;

    return 0 ;
}