//to insert an element to already sorted array such that it still remains sorted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],n,x;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter sorted array of size n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be inserted";
    cin>>x;
    int i;
    for(i=n-1;i>=0;i--)
    {
     if(arr[i]>x)
     {
         arr[i+1]=arr[i];
     }
     else
         break; 
    }
     arr[i+1]=x;
                n=n+1;
    cout<<"The new array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}