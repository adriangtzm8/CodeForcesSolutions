#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    string s;
    cin >> s;

    int zeroCounter = 0;
    int oneCounter = 0;

    int size = s.size();

    for (int i = 0; i < size + 1; i++)
    {
        if (oneCounter >= 7 || zeroCounter >= 7)
        {
            cout << "YES";
            return 0;
        }
        if (s[i] == '0')
        {
            zeroCounter++;
            oneCounter = 0;
        }
        if (s[i] == '1')
        {
            oneCounter++;
            zeroCounter = 0;
        }
        
    }

    cout << "NO";

    return 0;


}