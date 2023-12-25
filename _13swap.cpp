// 13. Write a C++ program that swaps two numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cout<<"Enter number of a"<<a;
    cin>>b;
    cout<<"Enter number of b "<<b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"Swap 1st number"<<a<<endl;
    cout<<"Swap 2nd number"<<b<<endl;


}