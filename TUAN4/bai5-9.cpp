#include <bits/stdc++.h>
using namespace std;
int random(int &a)
{
    a= rand()%a;
    return a;
}
int main()
{
int a;
cin >> a;
cout << random(a);
     return 0;
 }
