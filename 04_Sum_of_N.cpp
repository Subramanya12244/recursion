using namespace std;
#include<iostream>
int Sum(int n,int num,int sum)
{
    if(n==num+1)
        return sum;
    sum += n;
    Sum(n+1,num,sum);
    // n=n+1;

}
int main()
{
cout<<Sum(1,5,0);
}