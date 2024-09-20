#include <iostream>
using namespace std;

int main() {
    int len;
    cin >> len;

    cout << len * len << '\n';

    if (len < 5)
    {
        cout << "tiny";
    }

    return 0;
}