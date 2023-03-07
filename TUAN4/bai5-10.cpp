#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int a[n];
for(int i =0; i<n; i++)
{
 a[i] = rand()%49 ;
}
for(int i =0; i<n; i++)
{
    cout << a[i]<<" ";
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(a[i]+a[j]+a[k]==25) cout << a[i] <<" "<< a[j] << " "<< a[k];
        }
    }
}
    return 0;
}
