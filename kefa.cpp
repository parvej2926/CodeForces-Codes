#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,q,cnt=1;
    vector<int> v1,v2;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>q;
        v1.push_back(q);
    }

    for(int i=0;i<n-1;i++){
        if(v1[i+1] >= v1[i]){
            cnt++;
        }
        else{
            v2.push_back(cnt);
            cnt=1;
        }
    }

    v2.push_back(cnt);

    int m = *max_element(v2.begin(), v2.end());
    cout<<m;

    return 0;
}
