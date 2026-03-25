#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<int,int>mp;
    int s,n,cnt=0;
    cin>>s>>n;
    int p=n;
    while(p--){
        int x,y;
        cin>>x>>y;
        mp.insert({x,y});
    }
    for(auto it:mp){
        if(s>it.first) {
            s= s+it.second;
            cnt++;
        }
        else break;
    }
    if(cnt==n) cout<< "YES";
    else cout << "NO";
    return 0;
}
