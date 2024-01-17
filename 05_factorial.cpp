using namespace std;
#include<iostream>
int32_t factorial(int n,int fact)
{
if(n==1)
    return fact;
fact=fact*n;
factorial(n-1, fact);
}
int main(){
int n;
cin>>n;
cout<<factorial(n,1);
}