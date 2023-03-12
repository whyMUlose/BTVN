#include <bits/stdc++.h>
using namespace std;
int binarysearch(int *a, int n,int x )
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x) return i;
    }
    return -1;
}
int main()
{
    int n,x;
    cin >> n>>x;
    int *a = new int [n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
   cout  << binarysearch(a,n,x);
    return 0;
}
