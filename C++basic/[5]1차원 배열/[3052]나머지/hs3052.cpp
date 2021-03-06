#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    int arr[42] = {0};

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        arr[n % 42]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}