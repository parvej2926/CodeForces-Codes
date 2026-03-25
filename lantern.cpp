#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> v1;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        v1.push_back(x);
    }

    sort(v1.begin(), v1.end());
    vector<double> v2;

    if(v1[0] != 0) v2.push_back(v1[0] - 0);
    if(v1[n-1] != l) v2.push_back(l - v1[n-1]);

    for(int i = 0; i < n - 1; i++) {
        v2.push_back((v1[i+1] - v1[i]) / 2.0);
    }

    double d = *max_element(v2.begin(), v2.end());

    cout << setprecision(9) << d << endl;
    return 0;
}
