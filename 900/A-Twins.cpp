#include <iostream>
#include <algorithm>

int main()
{
    using std::cout;
    using std::cin;
    
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int coin;
        cin >> coin;
        arr[i] = coin;
        sum += coin;
    }
    
    int size = sizeof(arr)/sizeof(arr[0]);
    int half = sum/2;

    std::sort(arr, arr + size);
    int sumCheck = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        count++;
        sumCheck += arr[i];
        if (sumCheck > half)
        {
            break;
        }
        
    }

    cout << count;
    return 0;

}