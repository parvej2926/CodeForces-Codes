#include<iostream>
using namespace std;

int main(){
    int n,k,cnt=0,sum=0;
    cin>>n>>k;
    int x = 240-k;  //18

    for(int i=1;i<=n;i++){
        sum += 5*i;
        if(sum<=x){
            cnt++;
        }
        else break;
    }
    cout<<cnt;
    return 0;

}
