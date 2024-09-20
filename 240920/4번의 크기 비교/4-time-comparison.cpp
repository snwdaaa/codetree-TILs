#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int val;
    for (int i = 1; i < 5; i++) // b, c, d, e
    {
        cin >> val;
        if (a > val) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}