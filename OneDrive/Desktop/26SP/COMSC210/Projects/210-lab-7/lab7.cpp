#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main()
{
    const int SIZE = 5;

    string* names = new string[SIZE];

    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    cout << "Original array: ";
    displayArray(names, SIZE);

    delete[] names;
    return 0;
}

void displayArray(string* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i);
    }
    cout << endl;
}
