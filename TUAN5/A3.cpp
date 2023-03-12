#include <bits/stdc++.h>
using namespace std;
 count_even(int* a, int size)
 {
     int count = 0;
     for(int i =0;i<size;i++)
     {
         if(a[i]%2==0) count++;
     }
     return count;
 }
int main()
{ int n;
cin >> n;
    int *a = new int [n];
    for(int i =0;i< n;i++)
    {
        cin >> a[i];
    }
    cout << count_even(a, 5);
    cout << count_even(&a[n-5],5);
    return 0;
}
