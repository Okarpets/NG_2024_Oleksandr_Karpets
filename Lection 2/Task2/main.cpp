#include <iostream>

using namespace std;

int main()
{
    int index = 0;
    int number = -1;
    int weight = -1;
    int minm = -1;
    int maxm = -1;
    int temp = -1;
    cout << "Enter weight of the array:" << endl;
    cin >> weight;
    int *arr = new int[weight];
    for (int index = 0; index < weight; index++) {
        cout << "Please enter a number in your array: " << endl;
        cin >> number;
        arr[index] = number;
    }
    minm = arr[0];
    maxm = arr[0];
    for (int index = 1; index < weight; index++) {
        if (minm > arr[index]) {
            minm = arr[index];
        }
        if (maxm < arr[index]) {
            maxm = arr[index];
        }
    }
    cout << "Min element: " << minm << endl;
    cout << "Max element: " << maxm << endl;
    delete[] arr;
    return 0;
}
