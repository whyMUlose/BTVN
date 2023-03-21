#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x;
    int y;
    void in()
    {
        cin >> x >> y;
    }
   void midpoint(const  Point& a, const  Point& b)
   {
       Point mid;
       mid.x = (a.x+b.x)/2;
       mid.y = (a.y+b.y)/2;
       cout << mid.x << mid.y;
   }
};
int main()
{
    Point a; Point b; Point mid;
    a.in(); b.in();
mid.midpoint(a,b);
    return 0;
}

