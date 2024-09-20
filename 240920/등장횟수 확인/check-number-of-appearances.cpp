#include <iostream>
using namespace std;

int main() {
    int cnt = 0;

    for (int i = 0; i < 5; i++)
    {
        int inputVal;
        cin >> inputVal;
        if (inputVal % 2 == 0) cnt++;
    }

    cout << cnt;

    return 0;
}