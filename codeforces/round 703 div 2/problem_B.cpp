#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> x(n,0),y(n,0);
		for(int i=0;i<n;i++)
			cin>>x[i]>>y[i];
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		ll cnt = (x[x.size()/2]-x[(x.size()-1)/2] + 1) * (y[y.size()/2]-y[(y.size()-1)/2] + 1);
		cout<<cnt<<endl;
	}
	return 0;
}