#include <iostream>
using namespace std;

int main()
{
    int t, a, b;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << '\n';
    }

    return 0;
}