#include<iostream>
#include<climits>
using namespace std ; 

int main()
{
    int n ;
    cin>>n ; 

    int arr[n];

    for(int i = 0 ; i<n; i++)
    {
        cin>>arr[i];

    }

    int currentsum = 0 ;
    int mx = INT_MIN;

    for(int i = 0 ; i<n ; i++)
    {
        currentsum += arr[i];
        if(currentsum<0)
        {
            currentsum=0;
        }
        mx = max(mx , currentsum);
    }
    cout<<mx<<endl;
    return 0 ; 
}