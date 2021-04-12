#include<iostream>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}
int main(){
	int t;
	cin>>t;
	int digits[10] = {0};
	for(int i=1;i<10;i++){
		digits[i] = 1;
	}
	ll lcm = 1;
	for(int i=1;i<10;i++){
		if(digits[i] != 0){
			lcm = (lcm * i)/gcd(i,lcm);
		}
	}
	while(t--){
		ll n;
		cin>>n;
		ll next = ((n+lcm-1)/lcm)*lcm;
		for(ll i=n;i<n+next;i++){
			ll m = i, f = 0;
			while(m != 0){
				ll d = m%10;
				m = m/10;
				if(d != 0){
					if(i%d != 0){
						f = 1;
						break;
					}
				}
			}
			if(f == 0){
				next = i;
				break;
			}
		}
		cout<<next<<endl;
	}
	return 0;
}