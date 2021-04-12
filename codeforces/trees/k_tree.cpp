#include<iostream>
#define ll long long
#define mod 1000000007
using namespace std;
int main(){
	int n,k,d;
	cin>>n>>k>>d;
	ll a[k+1][n] = {0}, b[d][n] = {0};
	for(int j=0;j<k+1;j++){
		a[j][0] = 0;		
	}
	a[0][0] = 1;
	a[k][0] = 1;
	for(int j=0;j<(d-1);j++){
		b[j][0] = 0;		
	}
	b[0][0] = 1;
	b[d][0] = 1;
	for(int i=1;i<n;i++){
		int s = 0;
		for(int j=0;j<k;j++){
			if(j == 0){
				a[j][i] = a[k][i-1] % mod;
				s = ((s % mod) + (a[k][i-1] % mod)) % mod;
			}
			else{
				a[j][i] = a[j-1][i-1] % mod;
				s = ((s % mod) + (a[j-1][i-1] % mod)) % mod;
			}
		}
		a[k][i] = s % mod;
	}
	for(int i=1;i<n;i++){
		int s = 0;
		for(int j=0;j<(d-1);j++){
			if(j == 0){
				b[j][i] = b[d][i-1] % mod;
				s = ((s % mod) + (b[d][i-1] % mod)) % mod;
			}
			else{
				b[j][i] = b[j-1][i-1] % mod;
				s = ((s % mod) + (b[j-1][i-1] % mod)) % mod;
			}
		}
		b[d][i] = s % mod;
	}
	if(d != 1)
		cout<<(((a[k][n-1] % mod)-(b[d][n-1] % mod)) % mod) + (((a[k][n-1] % mod) >= (b[d][n-1] % mod)) ? 0 : mod)<<endl;
	else
		cout<<(a[k][n-1] % mod)<<endl;
	return 0;
}