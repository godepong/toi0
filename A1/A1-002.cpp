#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,cnt=0;cin>>n;
    while(n>=10) cnt++,n-=10;
    cout<<"10 = "<<cnt<<'\n';
    cnt=0;
    while(n>=5) cnt++,n-=5;
    cout<<"5 = "<<cnt<<'\n';
    cnt=0;
    while(n>=2) cnt++,n-=2;
    cout<<"2 = "<<cnt<<'\n';
    cnt=0;
    while(n>=1) cnt++,--n;
    cout<<"1 = "<<cnt<<'\n';
    cnt=0;
}