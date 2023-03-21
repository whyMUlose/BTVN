
#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x;
    int y;
};
    void print(Point a)
    {
        cout << &a;
    }
void printt (Point& a)
{
    cout << &a;
}
int main()
{
    Point toado;
    toado.x = 0;
    toado.y = 1;
    print(toado);
    printt(toado);
    return 0;
}
