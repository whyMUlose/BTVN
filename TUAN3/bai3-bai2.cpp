#include <bits/stdc++.h>
using namespace std;
int nhonhat(int a[], int n)
{
  int min = a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(min>=a[j]) min =a[j];
        }
    }
    return min;
}
int lonnhat(int a[], int n)
{
  int max = a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<=a[j]) max =a[j];
        }
    }
    return max;
}
 int main(){
int n;
cin >> n;
int a[n];
for(int i =0; i< n;i++)
{
    cin >> a[i];
}
int sum =0;
for(int i =0; i< n;i++)
{
if(a[i]%2==0) sum += a[i];
}
int count = 0;
for(int i =0; i< n;i++)
{
    if(a[i%2]!=0) count++;
}
cout << lonnhat(a, n) << nhonhat(a, n)<< sum << count ;
     return 0;
 }
