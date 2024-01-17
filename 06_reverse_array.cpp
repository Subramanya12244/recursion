using namespace std;
#include<iostream>
void reverse(int arr[],int start,int end)
{
    if(start>end) 
        return;
    int temp=arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // swap(arr[start],arr[end-start-1]);
    reverse(arr,start+1,end-1);  
    // reverse(arr,start+1,end);  
}
int main(){
int arr[6];
for(int i=0;i<6;i++)
cin >> arr[i];
reverse(arr,0,5);
for(int i=0;i<6;i++)
        cout<<arr[i]<< endl;
}