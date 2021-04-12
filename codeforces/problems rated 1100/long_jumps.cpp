#include<iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i] = a[i];
		}
		ll max_score = 0;
		for(ll i=0;i<n;i++){
			if(b[i] > max_score)
				max_score = b[i];
			if(i + a[i] < n)
				if(b[i] + a[i + a[i]] > b[i + a[i]])
					b[i + a[i]] = b[i] + a[i + a[i]];
		}
		cout<<max_score<<endl;
	}
	return 0;
}