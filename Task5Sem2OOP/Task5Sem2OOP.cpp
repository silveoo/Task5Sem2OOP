#include <iostream>

using namespace std;

void sort(int*);

int main()
{
    int* arr = new int[12];

    for (int i = 0; i <= 11; i++)
    {
        arr[i] = (i+1);
    }

    cout << "[ ";

    for (int i = 0; i <= 11; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << ']' << endl;
    sort(arr);
    cout << "[ ";

    for (int i = 0; i <= 11; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << ']' << endl;

    return 0;
}

void sort(int* arr)
{
    for (int i = 0; i < 11;)
    {
        int srt = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = srt;
        i += 2;
    }
}
