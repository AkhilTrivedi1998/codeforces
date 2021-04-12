#include<iostream>
using namespace std;
int main(){
	int n,q,k;
	cin>>n>>q>>k;
	int a[n] = {0};
	for(int i=0;i<n;i++)
		cin>>a[i];
	int b[4][n] = {0};
	b[0][0] = a[1] - 2;
	b[1][0] = 0;
	b[2][0] = 0;
	b[3][0] = 0;
	b[1][n-1] = k - a[n-2] - 1;
	b[0][n-1] = 0;
	b[2][n-1] = 0;
	b[3][n-1] = 0;
	for(int i=1;i<(n-1);i++){
		b[0][i] = a[i+1] - 2;
		b[1][i] = k - a[i-1] - 1;
		b[2][i] = a[i+1] - a[i-1] - 2;
		b[3][i] = b[2][i] + b[3][i-1];
	}
	if(n > 1)
		b[3][n-1] = b[3][n-2];
	// cout<<endl;
	// for(int i=0;i<4;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<b[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	while(q--){
		int l,r;
		cin>>l>>r;
		l = l-1;
		r = r-1;
		if(l == r)
			cout<<(k-1)<<endl;
		else{
			int cnt = b[0][l] + b[1][r] + (b[3][r] - b[3][l] - b[2][r]);
			cout<<cnt<<endl;
		}
	}
	return 0;
}