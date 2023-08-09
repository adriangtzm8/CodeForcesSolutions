#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    string s;
    cin >> s;
    std::sort(s.begin(), s.end());
    int size = s.size();
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    
    if (count % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}
