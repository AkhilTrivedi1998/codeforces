#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int l = ceil((float)k/2);
		cout<<(n - l)<<endl;;
		for(int i=l;i<=n;i++){
			if(i == k)
				continue;
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}