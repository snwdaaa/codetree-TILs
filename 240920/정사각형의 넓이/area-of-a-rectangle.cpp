#include <iostream>
using namespace std;

int main() {
    int len;
    cin >> len;

    if (len < 5)
    {
        cout << "tiny";
    }
    else
    {
        cout << len * len;
    }

    return 0;
}