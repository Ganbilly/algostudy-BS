#include <iostream>
using namespace std;

int main() {

    int t, a, b;

    cin >> t;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}