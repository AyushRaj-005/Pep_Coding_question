#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];


    int small=arr[0];
    int second=arr[0];


    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            second=small;
            small=arr[i];
        }

        else if(arr[i]<second && arr[i]!=small)
        {
            second=arr[i];
        }
    }


    cout<<second;

    return 0;
}
