#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int h[n] = {0};
		for(int i=0;i<n;i++)
			cin>>h[i];
		int i = 1, f = 0, pos = -1;
		while(i <= k){
			int j = 0;
			while(j < n-1 && h[j] >= h[j+1])
				j++;
			if(j == n-1){
				pos = -1;
				break;
			}
			else{
				pos = j+1;
				h[j] += 1;
			}
			i++;
		}
		cout<<pos<<endl;
	}
	return 0;
}