#include <bits/stdc++.h> 
#define ll long long
using namespace std;
ll ceil_div(ll a, ll b){
	return (a + b -1) / b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll x,y,k;
		cin>>x>>y>>k;
		// double b = 2e+09 + k;
		// cout<<static_cast<ll>(b)<<endl;
		// double a, b;
		// a = ceil(((double)(k + y*k - 1))/((double)(x - 1))) + (double)k;
		// modf(a, &b);
		// cout<<(ll)a<<endl;
		//cout<<a<<" "<<typeid(a).name()<<endl;
		cout<<ceil_div(k + y*k - 1, x - 1) + k<<endl;
	}
	return 0;
}