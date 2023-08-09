#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    int n;
    string s;
    cin >> n >> s;
    int countA = 0;
    int countD = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A') countA++;
        else countD++;
    }

    if (countA == countD) cout << "Friendship";
    else if (countA > countD) cout << "Anton";
    else cout << "Danik";
    return 0;
}