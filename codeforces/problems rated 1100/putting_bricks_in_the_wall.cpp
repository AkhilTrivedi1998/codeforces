#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		}
		vector<pair<int,int>> v;
		int cnt = 0;
		if(a[0][1] == a[1][0]){
			if(a[n-2][n-1] == a[n-1][n-2]){
				if(a[n-2][n-1] == a[0][1]){
					cnt = 2;
					v.push_back(make_pair(n-1,n));
					v.push_back(make_pair(n,n-1));
				}
			}
			else{
				int val = a[0][1] - '0';
				val = (val + 1) % 2;
				char ch = val + '0';
				cnt = 1;
				if(a[n-2][n-1] != ch)
					v.push_back(make_pair(n-1,n));
				else
					v.push_back(make_pair(n,n-1));
			}
		}
		else{
			if(a[n-2][n-1] == a[n-1][n-2]){
				int val = a[n-2][n-1] - '0';
				val = (val + 1) % 2;
				char ch = val + '0';
				cnt = 1;
				if(a[0][1] != ch)
					v.push_back(make_pair(1,2));
				else
					v.push_back(make_pair(2,1));
			}
			else{
				cnt = 2;
				if(a[0][1] != '0')
					v.push_back(make_pair(1,2));
				else
					v.push_back(make_pair(2,1));
				if(a[n-2][n-1] != '1')
					v.push_back(make_pair(n-1,n));
				else
					v.push_back(make_pair(n,n-1));
			}
		}
		cout<<cnt<<endl;
		if(cnt != 0){
			for(int i=0;i<cnt;i++)
				cout<<v[i].first<<" "<<v[i].second<<endl;
		}
	}
	return 0;
}