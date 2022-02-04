#include <iostream>
using namespace std;

int main()
{
    int t;
    int x1, y1, r1, x2, y2, r2;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    }

    return 0;
}