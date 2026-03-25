#include <iostream>
using namespace std;

int lucky_number(string s){
    for(char c : s){
        if(c!='4' && c!='7') return 0;
    }
    return 1;
}

int main (){
    int a;
    cin >> a;

    for(int i=1;i<=a;i++){
        if(a%i==0 && lucky_number(to_string(i))){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}
