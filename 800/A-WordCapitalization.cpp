#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    string n;
    cin >> n;

    if (n[0] >= 97 && n[0] <= 122)
    {
        n[0] -= 32;
    }

    cout << n;

    return 0;
}