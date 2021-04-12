#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		char a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		}
		if(2*x <= y){
			int cost = 0;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					int cnt = 0;
					if(a[i][j] == '.')
						cost += x;
				}
			}
			cout<<cost<<endl;
		}
		else{
			int cost = 0;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					int cnt = 0;
					if(a[i][j] == '.'){
						while(j < m && a[i][j] == '.'){
							cnt++;
							j++;
						}
					}
					cost += (((cnt/2)*y) + ((cnt%2 == 0)? 0 : x));
				}
			}
			cout<<cost<<endl;
		}
	}
	return 0;
}