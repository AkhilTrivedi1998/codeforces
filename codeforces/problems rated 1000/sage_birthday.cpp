#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n] = {0}, b[n] = {0};
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,greater<int>());
	int l = 0, r = n-1, k = 0, j = 0, cnt = 0;
	while(l <= r){
		if(k == 0){
			b[j] = a[l];
			l++;
			k = (k+1)%2;
		}
		else{
			b[j] = a[r];
			r--;
			k = (k+1)%2;
			if(l <= r)
				cnt++;
		}
		j++;
	}
	cout<<cnt<<endl;
	for(int i=0;i<n;i++){
		if(i == n-1)
			cout<<b[i]<<endl;
		else
			cout<<b[i]<<" ";
	}
	return 0;
}