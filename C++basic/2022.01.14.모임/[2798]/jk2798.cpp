#include <iostream>
using namespace std;

int main()
{
    int n, m, res = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int arr[n];
        cin >> arr[i];
        res += arr[rand()];
    }

    // arr[0]~arr[n-1] 중에
    // 임의의 3장이 최대한 m에 가깝게;
    // 1~n까지 다 대입

    // int res = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     res += arr[rand()];
    // }

    cout << res;

    return 0;
}