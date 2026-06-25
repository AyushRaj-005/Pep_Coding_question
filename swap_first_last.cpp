#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;


    int last=n%10;

    int temp=n;
    int count=0;


    while(temp>0)
    {
        count++;
        temp/=10;
    }


    int power=1;

    for(int i=1;i<count;i++)
        power*=10;


    int first=n/power;


    n=n-first*power;
    n=n/10;

    int result=last*power + n*10 + first;


    cout<<result;

    return 0;
}
