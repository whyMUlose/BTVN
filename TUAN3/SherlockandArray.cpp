#include <iostream>
using namespace std;
int  tong(int a[], int x, int y)
{
    int sum =0;
    for(int i=x;i<=y;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for(int i=0;i<m;i++){
        if(tong(a,0,i-1) == tong(a,i+1,m-1))
      count ++;
        }
        if(count == 0) cout << "NO";
        else cout << "YES";
    }
    return 0;
}
