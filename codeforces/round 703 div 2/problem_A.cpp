#include<iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n] = {0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		ll k = 0, s = a[0];
		for(int i=1;i<n;i++){
			if(a[i] + s >= i)
				s = (a[i] + s) - i;
			else{
				k = 1;
				break;
			}
		}
		if(k == 1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}