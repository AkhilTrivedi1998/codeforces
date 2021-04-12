#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		cout<<2<<endl;
		k = n;
		for(int i=0;i<n-1;i++){
			if(i == 0){
				cout<<k<<" "<<k-1<<endl;
			}
			else{
				cout<<k<<" "<<k-2<<endl;
				k = k-1;
			}
		}
	}
	return 0;
}