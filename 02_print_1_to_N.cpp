using namespace std;
#include<iostream>
void print_1_to_N(int cnt,int n)
{
    // int cnt = 0;
    if(cnt==n+1)
        return;
    cout<<cnt<<endl;
    print_1_to_N(cnt+1,n);
    
}
int main()
{
int n;
cin >> n;
print_1_to_N(1,n);
}