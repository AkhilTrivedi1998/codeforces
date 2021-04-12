#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unordered_map<int, int> mp;
		int f = 0;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			if(mp.find(temp) != mp.end()){
				mp[temp] += 1;
				f = 1;
			}
			else{
				mp[temp] = 1;
			}
		}
		if(f == 1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}