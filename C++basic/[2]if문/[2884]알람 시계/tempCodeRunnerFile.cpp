#include <iostream>
using namespace std;

int main()
{
    int h, m;

    cin >> h >> m;

    if (m == 45)
    {
        cout << h << " " << m - 45;
    }
    else if (m < 45 && h == 0)
    {
        cout << h + 23 << " " << m + 15;
    }
    else
    {
        cout << h - 1 << " " << m + 15;
    }
}