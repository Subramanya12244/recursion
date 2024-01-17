using namespace std;
#include<iostream>
void printName(int n,string name)
{
    if(n==0)
        return;
    cout<<name<<endl;
    printName(n-1,name);
}
int main()
{
string name="Subramanya";
int n=5;
printName(n,name);
}