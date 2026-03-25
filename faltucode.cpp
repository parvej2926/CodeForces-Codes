#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>t;
    int n,p;
    cin>>n;
    while (n--){
        cin>>p;
        t.push_back(p);
    }
    int k=*max_element(t.begin(),t.end());
    if(k!=1)t.push_back(1);
    else t.push_back(2);
    sort(t.begin(),t.end());
    t.pop_back();
    for(auto it: t){
        cout<<it<<" ";
    }
    return 0;
}
