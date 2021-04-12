#include<iostream>
#define ll long long
using namespace std;
void fun(ll &a,ll &b,ll x,ll y,ll n){
	if(a-x >= n)
		a = a-n;
	else{
		n = n - (a-x);
		a = x;
		if(b-y >= n)
			b = b-n;
		else
			b = y;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		// if(a < b){
		// 	fun(a,b,x,y,n);
		// }
		// else if(a > b){
		// 	fun(b,a,y,x,n);
		// }
		// else{
		// 	if(a-x >= b-y)
		// 		fun(a,b,x,y,n);
		// 	else
		// 		fun(b,a,y,x,n);
		// }
		ll a1 = a,a2 = a,b1 = b,b2 = b;
		fun(a1,b1,x,y,n);
		fun(b2,a2,y,x,n);
		cout<<min(a1*b1, a2*b2)<<endl;
	}
	return 0;
}