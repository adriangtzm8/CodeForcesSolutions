#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    string s;
    int n;
    cin >> n >> s;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i + 1] == s[i])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}