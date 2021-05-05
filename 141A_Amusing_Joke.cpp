#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
fast

string host;
string guest ;
string given;
cin >> host >> guest >> given;

if((guest.length()+host.length())!=given.length()) cout << "NO";
else{
    loop(i,guest.length()){
        if(given.find(guest[i])!=-1){
            given.erase(given.begin()+given.find(guest[i]));
        }
    }
    loop(i,host.length()){
        if(given.find(host[i])!=-1){
            given.erase(given.begin()+given.find(host[i]));
        }
    }
    if(given.length()==0)cout << "YES";
    else cout << "NO";
}
return 0;
}
