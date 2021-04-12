#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		if(k < n){
			if(n % k == 0)
				k = n;
			else
				k = k * (n/k + 1);
		}
		if(k == n)
			cout<<1<<endl;
		else if(k > n){

			cout<<(long int)ceil((double)k/n)<<endl;
		}
	}
	return 0;
}