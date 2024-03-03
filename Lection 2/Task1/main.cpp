#include <iostream>

using namespace std;

int main()
{
    int length = -1;
    int sum = 0;
    int even = 0;
    int odd = 0; // Nechetnie
    cout << "Enter array length:" << endl;
    cin >> length;
    int *arr = new int[length];
    for (int index = 0; index < length; index++) {
        cout << "Enter array element:" << endl;
        cin >> arr[index];
    }
    for (int index = 0; index < length; index++) {
        sum = sum + arr[index];
        if (arr[index]%2 == 0) even = even + arr[index];
        else odd = odd + arr[index];
    }
    cout << "Sum of all numbers in array: " << sum << endl;
    cout << "Sum of all even numbers in array: " << even << endl;
    cout << "Sum of all odd numbers in array: " << odd << endl;
    delete[] arr;
    return 0;
}

