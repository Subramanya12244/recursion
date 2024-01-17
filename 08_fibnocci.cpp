using namespace std;
#include<iostream>
int fib(int n)
{
    if(n==0 || n==1) return n;
    else
       return fib(n-2)+fib(n-1);
}
int main()
{
int n;
cin>>n;
cout<<fib(n);
}