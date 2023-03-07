#include <bits/stdc++.h>
using namespace std;
int ucln( int a, int b)
{
if(a == b) return a;
while(a!=b)
{
    if(a>b) a -= b;
    else b-= a;
}
return a;
}
int main()
{
int a,b;
cin >> a >>b;
if(ucln(a, b)==1) cout << "a b nguyen to cung nhau";
else cout << ucln(a,b);
     return 0;
 }
