using namespace std;
#include<iostream>
void print_N_to_1(int cnt)
{
    if(cnt == 0)
     return;
    cout<<cnt<<endl;
    print_N_to_1(cnt-1);
}
int main()
{
int n;
cin>>n;
print_N_to_1(n);
}