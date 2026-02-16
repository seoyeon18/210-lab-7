#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

int main()
{
    const int SIZE = 5;

    string* names = new string[SIZE];

    delete[] names;
    return 0;
}
