#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h; // (0,0) ~ (w,h)

    cin >> x >> y >> w >> h;

    if (w - x < h - y && w - x < x)
    {
        cout << w - x;
    }
    else if (x < y && x < w - x)
    {
        cout << x;
    }
    else if (w - x >= h - y && h - y <= y)
    {
        cout << h - y;
    }
    else
    {
        cout << y;
    }

    return 0;
}