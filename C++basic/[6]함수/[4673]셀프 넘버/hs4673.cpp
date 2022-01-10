#include <iostream>
using namespace std;

int d(int n)
{
    int sum;
}

int main()
{
    int i;
    int num;

    for (int i = 50; i <= 70; i++)
    {
        for (int num = 2; num < i; num++)
        {
            if (i % num == 0)
                break;
        }
        if (i == num)
            cout << i;
    }
    return 0;
}