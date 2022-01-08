#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int count = 0;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    m = n;
    while (1)
    {
        m = ((m / 10) + (m % 10));
        count++;
        if (n == m)
        {
            break;
        }
    }
    cout << count;

    return 0;
}