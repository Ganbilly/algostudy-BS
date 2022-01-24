#include <iostream>
using namespace std;

int notself(int self)
{
    int add;

    add = self;
    while (self >= 10)
    {
        add += self % 10;
        self /= 10;
    }

    add += self;
    return add;
}
int main()
{
    //d(75)=75+7+5=87 75는 87의 생성자
    int num;
    cin >> num;
    cout << notself(num);

    return 0;
}