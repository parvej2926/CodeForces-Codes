#include <iostream>
#include <map>
using namespace std;

int main(){
    int k;
    string s;
    cin >> k;
    cin >> s;

    map<char,int> t;

    for(int i = 0; i < s.length(); i++){
        t[s[i]]++;
    }

    for(auto it : t){
        if(it.second % k != 0){
            cout << "-1";
            return 0;
        }
    }

    string base;
    for(auto it : t){
        for(int i = 0; i < it.second / k; i++){
            base += it.first;
        }
    }

    int repeat = k;
    while(repeat--){
        cout << base;
    }

    return 0;
}
