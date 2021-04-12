#include<iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll p, a, b, c;
		cin>>p>>a>>b>>c;
		ll x = (p % a != 0) ? (a - (p % a)) : 0;
		ll y = (p % b != 0) ? (b - (p % b)) : 0;
		ll z = (p % c != 0) ? (c - (p % c)) : 0;
		ll min = (x <= y) ? ((x <= z) ? x : z) : ((y <= z) ? y : z);
		cout<<min<<endl;
	}
	return 0;
}