#include <iostream>
using namespace std;

// Time complexity : O(n)
void print_subarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")";
        }

        cout << "\n";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 4, 6, 9};
    int n = sizeof(arr) / sizeof(int);

    print_subarrays(arr, n);
    return 0;
}
