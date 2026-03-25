#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, r = 0;
    cin >> n;

    while (n--) {
        int a;
        cin >> a;

        if (a != -1)
            r += a;
        else {
            if (r - 1 < 0)
                cnt++;
            else
                r--;
        }
    }

    cout << cnt;
    return 0;
}
