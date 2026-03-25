#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int sum = 240 - k;
    int cnt = 0;

    for(int i = 1; i <= n; i++) {
        if(sum - i*5 >= 0) {
            cnt++;
            sum -= i*5;
        }
        else break;
    }

    cout << cnt;
    return 0;
}
