#include<iostream>
using namespace std;

int main() {
int num, p = 0, q = 1, r;
cout<<"Enter a number:";
cin>>num;
cout<<"Fobonacii Series of a Number: ";
for( int i = 1; i<=num; i++){
    cout<< p << " ";
    r = p+q;
    p = q;
    q = r;
}
cout<<endl;
return 0;
}
