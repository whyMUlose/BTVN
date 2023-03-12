#include <bits/stdc++.h>
using namespace std;

void mang(int *a, int size)
{
    cout << sizeof(a) << endl;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << sizeof(a) << endl;
    mang(a, 5);

    return 0;
}
