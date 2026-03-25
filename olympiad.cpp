#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s1, s2, s3;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if(a == 1) s1.insert(i);
        else if(a == 2) s2.insert(i);
        else s3.insert(i);
    }

    int p = min({s1.size(), s2.size(), s3.size()});
    cout << p << "\n";

    while(p--){
        cout << *s1.begin() << " ";
        s1.erase(s1.begin());

        cout << *s2.begin() << " ";
        s2.erase(s2.begin());

        cout << *s3.begin() << "\n";
        s3.erase(s3.begin());
    }
}
