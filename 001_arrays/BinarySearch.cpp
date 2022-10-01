#include <iostream>
using namespace std;

// Time complexity : Olog(n)
// Condition : Need to be sorted array
int binary_search(int arr[], int n, int target)
{
    int start = 0;
    int end = n;

    // why need equal? because if only 1 item left in sub-array, start == end, but that 1 item could be a target
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target == arr[mid])
        {
            return 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int arr[] = {2, 4, 6, 9};
    int n = sizeof(arr) / sizeof(int);

    int target;
    cout << "Enter the target value : ";
    cin >> target;

    int result = binary_search(arr, n, target);

    if (result == 1)
    {
        cout << "Target value exists.";
    }
    else
    {
        cout << "Target value doesn't exist.";
    }

    cout << endl;

    return 0;
}
