#include <bits/stdc++.h>
using namespace std;
int toHop(int a, int b)
{
    if(a==0 || a==b) return 1;
    else if(a==1 || a == b-1) return b;
    else return toHop(a-1,b-1) + toHop(a,b-1) ;

}

void nhapKN(int k[], int n[], int x)
{
    for(int i = 0; i < x; i++  )
    {
        cin >> k[i] >> n[i];
        if(k[i] == n[i] & k[i] == -1)
        {
         break;
        }
    }
    for(int i = 0; i < x; i++)
      {
        cout << toHop(k[i], n[i]) << endl;
           if(k[i] == n[i] & k[i] == -1)
        {
         break;
        }
      }
}

int main()
{int x;
cin >> x;
int k[x], n[x];
   nhapKN(k,n, x);

    return 0;
}
