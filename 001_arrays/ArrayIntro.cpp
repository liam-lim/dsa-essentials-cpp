#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a1[100];             // static memory allocation, interger has 4 bytes, 100 x 4 = 400 bytes allocated. All space is filled with garbage values.
    int a2[100] = {0};       // All 100 space is filled with 0.
    int a3[100] = {1, 2, 3}; // first 3 values are assigned but the rest 97 values are 0?
    int a4[] = {1, 2, 3};    // only 3 memory space with values??
    string fruites[2] = {"a", "b"};

    cout << "\n\na1 ......\n";
    for (int i = 0; i < 100; i++)
    {
        cout << a1[i] << " ";
    }

    cout << "\n\na2 ......\n";
    for (int i = 0; i < 100; i++)
    {
        cout << a2[i] << " ";
    }

    cout << "\n\na3 ......\n";
    for (int i = 0; i < 100; i++)
    {
        cout << a3[i] << " ";
    }

    cout << "\n\na4 ......\n";
    for (int i = 0; i < 100; i++)
    {
        cout << a4[i] << " ";
    }

    cout << endl;

    return 0;
}