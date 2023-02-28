#include <bits/stdc++.h>
using namespace std;
 int main(){

string s;
cin >> s;
int n =s.size();
int t=0;
for(int i = 0; i<n;i++)
{
    if(s[i] == s[n-i-1]) t=1;
    else t= 0;
}
if(t==1) cout <<"yes";
else cout << " no";
     return 0;
 }
