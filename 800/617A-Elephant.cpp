#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    int e;
    cin >> e;
    int counter = 0;

    while (e > 5)
    {
        e -= 5;
        counter++;
    }

    cout << counter + 1;
    
    return 0;
}