#include <iostream>
using namespace std;

int main()
{
    // 스페이스바를 카운트하면 안됨 (문자열 시작과 끝에 스페이스바가 있으면 곤란)
    // ->스페이스바가 아닌 문자가 오면 카운팅되게
    string ins;
    int count = 0;

    getline(cin, ins); //공백 포함한 문자열 받기
    // cin >> ins;
    for (int i = 0; i < ins.length(); i++)
    {
        if (ins[i] != ' ')
        {
            count++;
            if (ins[i] == ' ')
            {
                        }
        }
    }
    cout << count;

    return 0;
}