#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
struct node{
	vector<int> connected;
};
int dfs(int i, struct node * v, int * visited, ll h, ll * weight){
	ll cnt = 1;
	for(int j=0;j<v[i].connected.size();j++){
		if(visited[(v[i].connected)[j]] == 0){
			visited[(v[i].connected)[j]] = 1;
			cnt += dfs((v[i].connected)[j], v, visited, h+1, weight);
		}
	}
	weight[i] = h - (cnt-1);
	return cnt;
}
int main(){
	int n,k;
	cin>>n>>k;
	struct node v[n+1];
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		v[a].connected.push_back(b);
		v[b].connected.push_back(a);
	}
	int visited[n+1] = {0};
	ll weight[n+1] = {0};
	visited[1] = 1;
	dfs(1, v, visited, 0, weight);
	sort(weight+1, weight+n+1,greater<int>());
	// for(int i=1;i<=n;i++)
	// 	cout<<weight[i]<<" ";
	// cout<<endl;
	ll s = 0;
	for(int i=1;i<=k;i++)
		s += weight[i];
	cout<<s<<endl;
	return 0;
}