#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
double solve(int a,int b){
	double sma = 30;
	for(int i=0;i<=30;i++){
		int l = b + i;
		if(l == 1)
			continue;
		sma = min(sma, log(a)/log(l) + i + 1);
	}
	return sma;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		double ans;
		cin>>a>>b;
		cout<<solve(a,b)<<endl;
		modf(solve(a,b),&ans);
		cout<<ans<<endl;
	}
	return 0;
}