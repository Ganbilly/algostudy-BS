#include <iostream>
using namespace std;

int main()
{
    int n;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
        cout << '*';
        }
    cout << '\n';
    }

    return 0;
}