#include <iostream>
using namespace std;

// Time complexity : O(n)
void print_subarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(";
            for (int k = i; k <= j; k++) 
            {
                cout << arr[k];
            }
            cout << ")";
        }

        cout << "\n";
    }
}

int main()
{
    int arr[] = {2, 4, 6, 9};
    int n = sizeof(arr) / sizeof(int);

    print_subarrays(arr, n);
    return 0;
}
