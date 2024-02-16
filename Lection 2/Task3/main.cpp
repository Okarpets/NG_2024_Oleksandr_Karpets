#include <iostream>

using namespace std;

int main()
{
    int hight = -1;
    char elem = '*';
    char mpty = ' ';
    int maxm = 0;
    int counts;
    cout << "Enter lantern size:" << endl;
    cin >> hight;
    int *arr = new int[hight];
    int index = 0;
    cout << "Enter numbers:" << endl;
    while (true) {
        cin >> arr[index];
        if (arr[index] == 0) break;
        index++;
    }

    for (int index = 1; index <hight; index++) {
        if (maxm < arr[index]) {
            maxm = arr[index];
        }
    }

    for (int level = 0; level < (hight -1); level++) {
        counts = (maxm/2 - arr[level]/2);
        for (int space = 0; space < counts; space++) {
            cout << mpty;
        }
        for (int built = 0; built < arr[level]; built++) {
            cout << elem;
        }
        cout << endl;
    }

    delete [] arr;
    return 0;

}
