#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m,cnt=0;
    cin>>n>>m;
    map<int,int>mp;
    int k;
    for(int i=1; i<=n; i++){
        cin>>k;
        mp[i]=k;
    }
    int a=n-1;
    int x,y;
    while(a--){
        cin>>x>>y;
        if(mp[x]+mp[y]<=m) cnt++ ;
    }
    cout<<cnt;
}
