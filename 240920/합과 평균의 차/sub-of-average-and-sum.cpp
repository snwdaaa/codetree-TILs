#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    float avg = sum / 3.0f;
    cout << sum << '\n';
    cout << avg << '\n';
    cout << int(sum - avg);
    return 0;
}