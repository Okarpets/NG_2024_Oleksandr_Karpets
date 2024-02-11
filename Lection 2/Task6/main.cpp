#include <iostream>

using namespace std;

void did(int arr[10])
{
    int money;
    int number;
    string bills = " ";
    for (int i = 0; i < 10; i++) {
        bills = bills +  " " + to_string(arr[i]);
    }
    cout << "All cards now: " << bills << endl;
    cout << "Enter card number: " << endl;
    cin >> number;
    if (10 < number || 0 > number) {
        cout << "This card doesn't exist" << endl;
        did(arr);
    }
    else {
        cout << "Enter how much money to put on the card: " << endl;
        cin >> money;
        arr[number - 1] = arr[number - 1] + money;
        did(arr);
    }

}


int main()
{
    int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    did(arr);
}
