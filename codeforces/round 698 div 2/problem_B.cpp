#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int a[n] = {0};
		int b[10] = {0};
		for(int i=1;i<=9;i++){
			int l = (d*i)%10;
			if(b[l] == 0)
				b[l] = i;
		}
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i] >= 10*d){
				cout<<"YES"<<endl;
			}
			else{
				int r = a[i]%10;
				if(b[r] == 0 || b[r] > (a[i]/d))
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}
		}
	}
}