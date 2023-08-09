#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    string s;
    cin >> s;
    int countL = 0;
    int countU = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            countU++;
        }
        if(s[i] >= 97 && s[i] <= 122)
        {
            countL++;
        }
    }

    if (countL >= countU)
    {
        for (int i = 0; i < s.length(); i++) {
            s[i] = std::tolower(s[i]);
        }
    }
    else 
    {
        for (int i = 0; i < s.length(); i++) {
            s[i] = std::toupper(s[i]);
        }
    }

    cout << s;

    return 0;

}