#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x;
    int y;
};
int main()
{
    Point toado = {1,2};
    cout << &toado<<" "<< &(toado.x) << &(toado.y);
    return 0;
}
// x và y lưu ở các vị trí khác nhau trong bộ nhớ

