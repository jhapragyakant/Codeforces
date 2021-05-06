#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }
    list<pair<int,int>> l;
    for(int i=0;i<n;i++){
        l.push_back({arr[i],i});
    }
    int index =-1;
    while(!l.empty()) {
        pair<int,int> x = l.front();
        l.pop_front();
        index = x.second;
        if((x.first-k)>0){
            l.push_back({x.first-k,index});
        }
    }
    cout << index+1;
}