//missing number
#include<bits/stdc++.h>
using namespace std;

int missing_number(int  array[], int n)
{
    int total;
    total = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
      total -= a[i];

    return total;
}

int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
    
    cout<<missing_number(array, n);
}