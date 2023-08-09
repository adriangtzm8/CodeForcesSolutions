#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    int b, m, p;
    cin >> b >> m >> p;
    int k = b;
    for (int i = 2; i <= p; i++)
    {
        b += k * i;
    }
    
    cout << b << "\n";
    b -= m;
    if (b > 0) cout << b;
    else cout << 0;

    return 0;
}