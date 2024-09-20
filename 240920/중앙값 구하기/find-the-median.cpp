#include <iostream>
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    int minVal = 101;
    int maxVal = -101;
    int minIdx, maxIdx;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
            minIdx = i;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > maxVal) 
        {
            maxVal = arr[i];
            maxIdx = i;
        }
    }
    for (int i = 0; i < 3; i++) if (i != minIdx && i != maxIdx) cout << arr[i];

    return 0;
}