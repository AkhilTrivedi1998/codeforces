#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		double temp = sqrt(n);
		int k = temp;
		if(k != temp)
			k = k + 1;
		//cout<<k<<endl;
		int m = (n + k - 1)/k;
		int res = k + m - 2;
		cout<<res<<endl;
	}
	return 0;
}