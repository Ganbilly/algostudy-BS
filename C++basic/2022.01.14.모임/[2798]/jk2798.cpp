#include <iostream>
using namespace std;

int main()
{
    // arr[0]~arr[n-1] 중에 임의의 3장이 최대한 m에 가깝게;
    // 1~n까지 다 대입 -> 0,1,2/0,1,3 etc -> 브루토 포스

    int n, m, res = 0;
    int num[100];
    cin >> n >> m;

    int sum, max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n - 2; i++) // ex n=5 -> i=0,1,2 /n=3 -> i=0
    {
        for (int j = i + 1; j < n - 1; j++) // ex n=5 -> j=1,2,3 /n=3 -> j=1
        {
            for (int k = j + 1; k < n; k++) // ex n=5 -? k=2,3,4 /n=3 -> k=2;
            {
                sum = num[i] + num[j] + num[k]; // 앞에서부터 다 더해본다 -> ex i=0,j,1일때 k 주르륵
                max = sum;

                if (max >= sum && max <= m) // 다음 수가 max보다 크면 max에 대입, 단 입력된 m을 넘지않는다, m이면 블랙잭!
                {
                    max = sum;
                }
                if (k == j || k == i) // 같은 자리에 있는 수 대입 방지
                {
                    break;
                }
            }
            cout << max;
            if (j == i) // 같은 자리에 있는 수 대입 방지
            {
                break;
            }
        }
    }

    return 0;
}