#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k, f = 0;
		cin>>n>>k;
		int a[n][2];
		for(int i=0;i<n;i++)
			cin>>a[i][0]>>a[i][1];
		for(int i=0;i<n;i++){
			int cnt = 0;
			for(int j=0;j<n;j++){
				if((abs(a[i][0] - a[j][0]) + abs(a[i][1] - a[j][1])) <= k)
					cnt++;
				else
					break;
			}
			if(cnt == n){
				f = 1;
				break;
			}
		}
		if(f == 1)
			cout<<1<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}