#include <iostream>
using namespace std;

int N;
int result;
int sum;
int arr[1000000] = {0};

int main()
{
    for (int i = 1; i < 1000000; i++)
    {
        result = i;
        sum = i;

        while (sum > 0)
        {
            result = result + (sum % 10);
            sum = sum / 10;
        }

    }
}

