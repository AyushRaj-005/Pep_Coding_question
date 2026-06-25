#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num % 2 == 0){
        cout<<num<<" No Is Even Number";
    }else{
        cout<<num<<" No Is Odd Number";
    }
    return 0;
}