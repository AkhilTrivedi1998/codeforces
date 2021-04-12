#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int b[n][m];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>b[j][i];
			}
		}
		int c[n][m];
		for(int k=0;k<m;k++){
			int temp = a[0][k], col = -1;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(b[i][j] == temp){
						col = j;
						j = m;
						i = n;
					}
				}
			}
			for(int l=0;l<n;l++){
				c[l][k] = b[l][col];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}