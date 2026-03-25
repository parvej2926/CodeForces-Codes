#include<iostream>
using namespace std;

int main(){
   int n,c=0;
   string p;
   cin>>n;
   cin>>p;
   for(int i=0;i<n-1;i++){
    if(p[i] == p[i+1])
     c++;
   }

    cout<<c;
    return 0;
  }
