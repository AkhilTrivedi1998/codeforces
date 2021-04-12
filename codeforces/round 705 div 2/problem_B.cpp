#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a[] = {0,1,2,5,8};
	vector<pair<int,int>> v;
	for(int i=0;i<5;i++){
		int ht = a[i];
		for(int j=0;j<5;j++){
			ht = ht*10 + a[j];
			for(int i=0;i<5;i++){
				int mt = a[i];
				for(int j=0;j<5;j++){
					mt = mt*10 + a[j];
					v.push_back(make_pair(ht,mt));
				}
			}
		}
	}
	while(t--){
		int h,m;
		cin>>h>>m;
		int h1,m1;
		string s;
		cin>>s;
		h1 = stoi(s.substr(0,2));
		m1 = stoi(s.substr(3,2));
		int i = 0, k = 0;
		while(i < v.size()){
			if(v[i].first >= h1 && v[i].first < h){
				k = 1;
				break;
			}
		}
		int j = 0, l = 0;
		while(j < v.size()){
			if(v[j].second >= m1 && v[j].second < m){
				l = 1;
				break;
			}
		}
		if(l == 1 && k == 1)
			cout<<to_string(v[i].first) + ":" + to_string(v[j].second)<<endl;
		else
			cout<<"00:00"<<endl;
	}
	return 0;
}