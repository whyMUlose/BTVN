#include <bits/stdc++.h>
using namespace std;
//abcd...z tu 97 den 122
int n,k;
char  x[100];
void inkq()
{
    for(int i=1;i<=k;i++)
    {
             x[i] = char(i+96);
           cout << x[i]<<" ";
    }
    cout << endl;
}
//i max: n-k+i
//i min: x[i-1]+1;
void Try(int i)
{
    //Duyet cac kha nang ma X[i]co the nhan duoc
    for(int j = x[i-1]+1;j<=n-k+i;j++ )
    {
        x[i] = char (j+96);
        if(i == k)
        {
            inkq();
        }
        else Try(i+1);

    }
}
int main()
{
    cin >> n >> k;
    Try(1);
    return 0;
}
