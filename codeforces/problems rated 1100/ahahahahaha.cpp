#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, cnt0 = 0, cnt1 = 0;
		cin>>n;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			if(temp == 0)
				cnt0 += 1;
			else
				cnt1 += 1;
		}
		int h = n/2;
		if(cnt1 <= h){
			cout<<cnt0<<endl;
			for(int i=0;i<cnt0;i++)
				cout<<0<<" ";
			cout<<endl;
		}
		else{
			cnt1 = (cnt1 % 2 == 0)? cnt1 : cnt1-1;
			cout<<cnt1<<endl;
			for(int i=0;i<cnt1;i++)
				cout<<1<<" ";
			cout<<endl;
		}
	}
	return 0;
}