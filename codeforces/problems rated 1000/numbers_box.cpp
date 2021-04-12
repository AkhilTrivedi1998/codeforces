#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m], cnt = 0, min_abs = 101, summation = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j] < 0)
					cnt++;
				if(abs(a[i][j]) < min_abs)
					min_abs = abs(a[i][j]);
				summation += abs(a[i][j]);
			}
		}
		if(cnt % 2 == 0){
			//cout<<1<<endl;
			cout<<summation<<endl;
		}
		else{
			//cout<<2<<endl;
			cout<<(summation - 2 * min_abs)<<endl;
		}
	}
	return 0;
}