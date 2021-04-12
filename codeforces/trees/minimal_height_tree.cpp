#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n] = {0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		int h = 0, l = 1, r = 1, k, cnt = 1;
		while(r < n){
			k = cnt;
			cnt = 0;
			while(r < n && k != 0){
				if(r == l){
					r++;
					cnt++;
				}
				while(r < n && a[r] > a[r-1]){
					r++;
					cnt++;
				}
				k--;
				if(k == 0){
					h++;
				}
				else if(r == n){
					h++;
					break;
				}
				l = r;
			}
		}
		cout<<h<<endl;
	}
	return 0;
}