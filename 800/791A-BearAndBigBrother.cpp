#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    int a, b;
    cin >> a >> b;
    int count = 0;
    while (b >= a)
    {
        a *= 3;
        b *= 2;
        count++;
    }

    cout << count;
    return 0;
}