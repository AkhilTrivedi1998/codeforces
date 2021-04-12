#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n,0);
	int k = 1;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(i > 0){
			if(i%2 == 1){
				if(v[i] < v[i-1])
					k = 0;
			}
			else{
				if(v[i] > v[i-1])
					k = 0;
			}
		}
	}
	vector<int> v1(v.begin(),v.end());
	if(k == 0){
		sort(v.begin(),v.end());
		int l = 1, r = v.size()-1, i = 1;
		v1[0] = v[0];
		while(l <= r){
			if(i % 2 == 1){
				v1[i] = v[r];
				r--;
			}
			else{
				v1[i] = v[l];
				l++;
			}
			i++;
		}
	}
	for(int j=0;j<n;j++)
		cout<<v1[j]<<" ";
	cout<<endl;
	return 0;
}