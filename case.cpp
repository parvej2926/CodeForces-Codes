#include <iostream>
using namespace std;
int main(){
    int t=0, p=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(islower(s[i])) t++;
        else p++;
    }
    if(p>t)  transform(s.begin(),s.end(),s.begin(),::toupper);
    else transform(s.begin(),s.end(),s.begin(),::tolower);
    cout <<s;
    return 0;
}
