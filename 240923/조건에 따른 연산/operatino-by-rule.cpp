#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;

    cin >> n;

    do
    {
        if (n % 2 == 0)
        {
            n = n * 3 + 1;
        }
        else
        {
            n = n * 2 + 2;
        }
        cnt++;
    } while (n < 1000);

    cout << cnt;

    return 0;
}