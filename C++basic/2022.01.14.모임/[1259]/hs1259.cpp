#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string n = 0;

    while (1)
    {
        cin >> n;

        string str = n;
        reverse(str.begin(), str.end());
        
        if (n == "0")
            break;

        else if (n == str)
            cout << "yes\n";
        
        else
            cout << "no\n";
    }

    return 0;
}