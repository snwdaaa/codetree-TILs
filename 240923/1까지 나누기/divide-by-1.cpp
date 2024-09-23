#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    int i = 1;
    int cnt = 0;
    while (n > 1)
    {
        n /= i;
        i++;
    }

    cout << i - 1;

    return 0;
}