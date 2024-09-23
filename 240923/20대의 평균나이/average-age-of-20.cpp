#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int cnt = 0;
    float avg = 0;
    int age = -1;

    while (true)
    {
        cin >> age;

        if (age >= 20 && age <= 29)
        {
            sum += age;
            cnt++;
        }
        else
        {
            break;
        }
    }

    avg = float(sum) / cnt;

    cout << fixed;
    cout.precision(2);

    cout << avg;

    return 0;
}