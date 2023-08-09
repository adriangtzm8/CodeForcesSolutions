#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    long long n;
    cin >> n;
    int luckyCounter = 0;

    while (n > 0)
    {   
        if (n % 10 == 4 || n % 10 == 7)
        {
            luckyCounter++;
        }
        n /= 10;
    }

    if (luckyCounter == 4 || luckyCounter == 7)
    {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}