#include <iostream>
using namespace std;

// Time complexity : O(n) 
// (brute force search)
int linear_search(int arr[], int n, int target)
{

    // Other notes: arr here is an address to the actual array
    // it has 4 bytes, and thus n is required to be passed on to this method. (pass by reference)

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return 1;
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

    int result = linear_search(arr, n, target);

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
