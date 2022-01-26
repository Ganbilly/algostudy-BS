#include <iostream>
using namespace std;

int main()
{
    string ins;
    int count = 0;

    cin >> ins;
    for (int i = 0; i < ins.length(); i++)
    {
        if (ins[i] == ' ')
        {
            count++;
        }
    }
    cout << count;

    return 0;
}