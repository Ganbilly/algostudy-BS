#include <iostream>
using namespace std;

int main()
{
    int n;
    int count;
    int num;
    char arr[80] = {0};

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        num = 0;
        count = 0;
        cin >> arr;
    }

    for (int i = 0; arr[i] != 0; i++)
    {
        if (arr[i] == 0)
        {
            count++;
            num += count;
        }

        else
        {
            count = 0;
        }
    }
    cout << num << '\n';

    return 0;
}