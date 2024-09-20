#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a < 500)
    {
        cout << "no";
    }
    else if (a < 1000)
    {
        cout << "pen";
    }
    else if (a < 3000)
    {
        cout << "mask";
    }
    else
    {
        cout << "book";
    }

    return 0;
}