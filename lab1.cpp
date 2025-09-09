//find the missing number
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
       if (arr[i+1]!=(arr[i]+1))
       {
       cout<<(arr[i]+1)<<endl;
       return 0;
       }
    }
    cout<<"NO number is missing"<<endl;
    return 0;
}

//VECTORS
//vector<datatype>vectorname;
//vector<int>v;
//v.push_back(value1);
//v.push_back(value2);
//v.push_back(value3);
//v.pop_back();//removes last element
//cout<<v[0];//prints first element
//cout<<v.[1];//prints second element
//cout<<v.[2];//prints third element
//cout<<v.size();//prints size of vector
