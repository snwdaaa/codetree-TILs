#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> b >> a;
    int cur = b;
    while (cur >= a)
    {
        if (cur % 2 == 0) cout << cur << " ";
        cur--;
    }
    return 0;
}