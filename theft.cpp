#include <iostream>
#include <set>
#include <numeric>
using namespace std;

int main(){
    multiset<int, greater<int>> ms;
    int n, cnt = 0;
    int sum1 = 0, sum2 = 0;
    cin >> n;

    while(n--){
        int a;
        cin >> a;
        ms.insert(a);
    }

    sum2 = accumulate(ms.begin(), ms.end(), 0);

    for(auto it = ms.begin(); it != ms.end(); ++it){
        sum1 += *it;
        sum2 -= *it;
        cnt++;
        if(sum1 > sum2) break;
    }

    cout << cnt << endl;
    return 0;
}
