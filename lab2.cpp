//find the sum of n natural numbers
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,sum=0;
        cin>>x;
        sum=sum+x;
        v.push_back(sum);
    }
}