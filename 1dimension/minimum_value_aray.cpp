// WAP to print the minimum value in a given array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {40, 3, 4, 6, 7, 8, 45};
    int len = sizeof(arr) / sizeof(arr[0]);
    int c = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        if (c > arr[i])
        {
            c = arr[i];
        }
    }
    cout << "min_value=" << c << "\n";
}