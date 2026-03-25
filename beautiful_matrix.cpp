#include<iostream>
using namespace std;

int main(){
   int arr[5][5], count1, count2;


    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                if(i==2  && j==2) cout << 0;
                else{
                    cout<<abs(2-i)+abs(2-j);
                }
            }
        }
    }

    return 0;
}
