#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int inputVal;
        cin >> inputVal;
        if (inputVal % 2 != 0 && inputVal % 3 == 0) cout << inputVal << '\n';
    }

    return 0;
}