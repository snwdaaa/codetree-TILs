#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int cur = a;
    while (cur <= b)
    {
        if (cur % 2 == 0) cout << cur << " ";
        cur++;
    }
    return 0;
}