#include <iostream>

using namespace std;

int main()
{
    int hight = -1;
    char space = ' ';
    char elem = '*';
    cout << "Set the height of the future Christmas tree:" << endl;
    cin >> hight;
    cout << "Your Christmas tree:" << endl;
    cout << space << endl;
    for (int colum = 0; colum < hight; ++colum) {
        for (int row = 0; row < (hight - colum); ++row) {
            cout << space;
        }
        for (int index = 0; index < 2 * colum; ++index) {
            cout << elem;
        }
        cout << elem << endl;
    }
    for (int row = 0; row < hight; ++row) {
        cout << space;
    }
    cout << elem << endl;
    return 0;
}
