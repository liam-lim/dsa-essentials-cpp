#include <iostream>
using namespace std;

// Time complexity : O(n)
void print_subarrays(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 9};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    print_subarrays(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
