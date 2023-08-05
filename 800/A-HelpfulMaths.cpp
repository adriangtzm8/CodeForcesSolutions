#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    string n;
    cin >> n;

    int length = n.length();

    
    for (int l = 0; l < length - 1; l++)
    {
        for (int k = 0; k < length - l - 1; k++)
        {
            if (n[k] != '+')
            {
                if (n[k] > n[k + 2])
                {
                    char temp = n[k];
                    n[k] = n[k + 2];
                    n[k + 2] = temp;
                }
            }
            
        }
    }

    cout << n;

    return 0;
}