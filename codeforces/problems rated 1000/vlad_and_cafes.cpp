#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n, 0);
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]] = i;
	}
	int minimum = 1000000, cafe;
	for(auto i=mp.begin(); i != mp.end() ;i++){
		if(i->second < minimum){
			minimum = i->second;
			cafe = i->first;
		}
	}
	cout<<cafe<<endl;
	return 0;
}