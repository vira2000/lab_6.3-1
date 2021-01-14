#include <iostream>

using namespace std;

template <typename T>
void fillArray(T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << " > ";
        cin >> arr[i];
    }
}

template <typename T>
void printArray(T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
T sumOfNegativeElements(T* arr, int size)
{
    T sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "N > ";
    cin >> n;

    int* arr = new int[n];

    fillArray(arr, n);

    cout << "Array: ";
    printArray(arr, n);
    cout << "Sum of negative elements: " << sumOfNegativeElements(arr, n) << endl;

    return 0;
}