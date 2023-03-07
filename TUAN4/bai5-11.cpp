#include <bits/stdc++.h>
using namespace std;
void thapsangnhi(int n)
{
    int a[1000];
    int i =0;
    while(n>0)
    {
        a[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout << a[j];
    }
}
    int nhisangthap(long long m)
{
    int p = 0;
    int tmp = 0;
    while (m > 0)
    {
        tmp += (m % 10) * pow(2, p);
        p++;
        m =m/10;
    }
    return tmp;
}

int main()
{
    int n, m;
    cin >> n >> m;
    thapsangnhi(n);
    cout << endl;
    cout << nhisangthap(m);
    return 0;
}
