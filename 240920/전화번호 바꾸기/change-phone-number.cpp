#include <iostream>
using namespace std;

int main() {
    string num;
    cin >> num;
    
    for (int i = 0; i < 13; i++)
    {
        if (i >= 4 && i <= 7)
        {
            cout << num[i + 5];
        }
        else if (i >= 9 && i <= 12)
        {
            cout << num[i - 5];
        }
        else
        {
            cout << num[i];
        }
    }

    return 0;
}