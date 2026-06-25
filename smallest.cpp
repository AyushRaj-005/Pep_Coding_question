#include<iostream>
using namespace std;

int main()
{
    int n,min=9;

    cin>>n;

    while(n>0)
    {
        int digit=n%10;

        if(digit<min)
            min=digit;

        n=n/10;
    }

    cout<<min;

    return 0;
}
