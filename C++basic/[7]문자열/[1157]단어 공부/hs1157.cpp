#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[26] = {0, };
    int max = 0;
    int index = 0;
    int count = 0;
    string str;

    cin >> str;

 // 대문자 65 ~ 90   /  소문자 97 ~ 122

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] < 90)
            arr[str[i] - 65]++;     //대문자
        if (str[i] >= 97 && str[i] < 122)
            arr[str[i] - 97]++;     //소문자
    }

    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
            max = arr[i];
            index = i;
    }

    for (int i = 0; i < 26; i++)
    {
        if (max == arr[i])
            count++;
    }

    if (count > 1)
        cout << "?";
    else
        cout << char(index + 65);
    
    return 0;
}