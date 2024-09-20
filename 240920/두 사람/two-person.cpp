#include <iostream>
using namespace std;

int main() {
    int age[2];
    char gender[2];
    cin >> age[0] >> age[1];
    cin >> gender[0] >> gender[1];

    bool cond1 = age[0] >= 19 || gender[0] == 'M';
    bool cond2 = age[1] >= 19 || gender[1] == 'M';

    if (cond1 || cond2) cout << 1;
    else cout << 0;

    return 0;
}