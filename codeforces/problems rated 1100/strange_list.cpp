#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		vector<pair<ll, ll>> v;
		ll res = 0;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			v.push_back(make_pair(a,1));
			res += a;
		}
		ll i = 0;
		while(i < v.size() && v[i].first % x == 0){
			v.push_back(make_pair(v[i].first / x, v[i].second * x));
			res += ((v[i].first / x)*(v[i].second * x));
			i++;
		}
		cout<<res<<endl;
	}
	return 0;
}