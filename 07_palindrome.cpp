using namespace std;
#include<iostream>
bool palindrome(string s,int i,int n)
{
    if(i>=n)
        return true;
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return palindrome(s,i+1,n);
}
int main()
{
string s = "madam";
	cout<<palindrome(s,0,s.length());
	cout<<endl;
	return 0;
}