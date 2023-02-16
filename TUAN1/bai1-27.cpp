#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if(n>0 && n%5 == 0) {cout << n/5;}
        else if(n!=-1 && n%5 !=0) {cout << "-1";}
        else{cout << "bye";
        break;
        }
    }
    return 0;
}
