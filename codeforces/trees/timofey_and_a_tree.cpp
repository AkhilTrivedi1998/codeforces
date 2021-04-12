#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int form_set(int i, int * parent, int * colors, vector<vector<int>> &v, int &no, vector<int> &visited){
	visited[i] = 1;
	for(int j=0;j<v[i].size();j++){
		if(visited[v[i][j]] == 0){
			int c = form_set(v[i][j], parent, colors, v, no, visited);
			if(c == colors[i]){
				parent[v[i][j]] = i;
				no--;
			}
		}
	}
	return colors[i];
}
int find_parent(int i, int * parent){
	int j = parent[i];
	if(j == i)
		return j;
	else{
		int k = find_parent(j, parent);
		parent[i] = k;
		return k;
	}
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>> v(n+1, vector<int>());
	for(int i=0;i<n-1;i++){
		int a, b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int colors[n+1] = {0};
	for(int i=1;i<n+1;i++)
		cin>>colors[i];
	int parent[n+1];
	for(int i=1;i<n+1;i++)
		parent[i] = i;
	int no_of_sets = n;
	vector<int> visited(n+1, 0);
	form_set(1, parent, colors, v, no_of_sets, visited);
	// cout<<no_of_sets<<endl;
	// for(int i=1;i<n+1;i++)
	// 	cout<<parent[i]<<" ";
	// cout<<endl;
	if(no_of_sets == 1){
		cout<<"YES"<<endl;
		cout<<1<<endl;
	}
	else{
		int root = 0;
		for(int i=1;i<n+1;i++){
			// cout<<i<<endl;
			unordered_set<int> s;
			for(int j=0;j<v[i].size();j++){
				// cout<<"     "<<find_parent(v[i][j], parent)<<endl;
				s.insert(find_parent(v[i][j], parent));
			}
			s.insert(find_parent(i, parent));
			if(s.size() == no_of_sets){
				root = i;
				break;
			}
		}
		if(root == 0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<root<<endl;
		}
	}
	return 0;
}