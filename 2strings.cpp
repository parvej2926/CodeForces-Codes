#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char>st1;
    stack<char>st2;
    stack<char>st3;
    string s1, s2;
    cin>>s1>>s2;
    for(int i = 0; i < s1.length(); i++){
        st1.push(s1[i]);
    }
    while(!st1.empty()){
        st3.push(st1.top());
        st1.pop();
    }
    for(int i = 0; i < s2.length(); i++){
        st2.push(s2[i]);
    }
    if(st2==st3) cout << "YES";
    else cout << "NO";

    return 0;
}
