#include <iostream>
using namespace std;
bool nto(int n)
{
    if(n<=1) return false;
    if(n>1)
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(nto(n)) cout << "yes";
    else cout << "no";
    return 0;
}
