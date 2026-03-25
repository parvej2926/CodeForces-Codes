#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int>mp;
    int n,t,in;
    cin>>n>>t;

    for(int i=1;i<=n-1;i++){
        cin>>in;
        mp[i] = in;
    }

    int s=1;
    while(s<t){
        s = s+mp[s];
    }
    if(s==t) cout << "YES";
    else cout << "NO";
    return 0;

}
