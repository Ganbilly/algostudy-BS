#include <iostream>
using namespace std;

int main()
{
    int x;
    int i = 1;

    cin >> x;

    while (x > i)
    {
        x -= i;
        i++;
    }

    if (i % 2 == 1)
    {
        cout << i + 1 - x << '/' << x;
    }
    else
        cout << x << '/' << i + 1 - x;
}