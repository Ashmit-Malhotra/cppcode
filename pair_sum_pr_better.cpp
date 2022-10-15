// better approach for pair sum pr
#include<iostream>
using namespace std ; 

bool pairsum(int arr[], int n , int k )
{
    int low = 0 ;
    int high = n-1 ;

    while(low<high)
    {
        if(arr[low]+arr[high] == k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{

    int n , k ;
    cin>> n >> k ;

    int arr[n];

    for(int i = 0 ; i < n ; i ++ )
    {
        cin>>arr[i];
    }

// sorting id done by selection sort 

    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(arr[j]<arr[i])
            {
                int temo = arr[j];
                arr[j]=arr[i];
                arr[i]=temo;
                 
            }
        }
    }

    cout<<pairsum(arr , n , k );
    return 0 ; 
}