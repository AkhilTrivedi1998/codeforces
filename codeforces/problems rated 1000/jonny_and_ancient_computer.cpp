#include<iostream>
#define ll long long
using namespace std;
const ll MOD = 1000000000000000000 / 2;
ll solve(ll a, ll b){
	if(a == b)
		return 0;
	else if(a > b){
		//cout<<"hello"<<endl;
		int cnt = 0;
		while((a > b) && (a & 1) != 1){
			a = a >> 1;
			cnt++;
		}
		if(a == b){
			return (cnt/3) + ((cnt%3 == 0)? 0 : 1);
		}
		else
			return -1;
	}
	else{
		if(a > MOD)
			return -1;
		else{
			int cnt = 0;
			while((a < b) && (a <= MOD)){
				a = a << 1;
				cnt++;
			}
			if(a == b)
				return (cnt/3) + ((cnt%3 == 0)? 0 : 1);
			else
				return -1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
	return 0;
} 