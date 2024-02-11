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
    for (int i = 0; i < length; i++) {
        cout << "Enter array element:" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < length; i++) {
        sum = sum + arr[i];
        if (arr[i]%2 == 0) even = even + arr[i];
        else odd = odd + arr[i];
    }
    cout << "Sum of all numbers in array: " << sum << endl;
    cout << "Sum of all even numbers in array: " << even << endl;
    cout << "Sum of all odd numbers in array: " << odd << endl;
    return 0;
}

