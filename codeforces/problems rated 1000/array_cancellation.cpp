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
		int j = 0, f = 0;
		for(int i=0;i<n;i++){
			if(a[i] > 0){
				if(i > j)
					j = i;
				while(j < n && a[i] > 0){
					if(a[j] < 0){
						// cout<<a[j]<<endl;
						// cout<<i<<" - "<<j<<endl;
						if(abs(a[i]) > abs(a[j])){
							// cout<<"hi"<<endl;
							a[i] = a[i] + a[j];
							a[j] = 0;
						}
						else{
							// cout<<"hello"<<endl;
							a[j] = a[i] + a[j];
							a[i] = 0;
						}
					}
					if(a[i] != 0)
						j++;
				}
				if(j == n)
					f = 1;
			}
			if(f == 1)
				break;
		}
		ll s = 0;
		for(int i=0;i<n;i++){
			if(a[i] > 0)
				s += a[i];
		}
		cout<<s<<endl;
	}
	return 0;
}