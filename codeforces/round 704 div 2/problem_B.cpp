#include<iostream>
#include<vector>
#include<stack>
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
		int b[n] = {0};
		b[0] = a[0];
		for(int i=1;i<n;i++){
			if(a[i] > b[i-1])
				b[i] = a[i];
			else
				b[i] = b[i-1];
		}
		vector<int> v;
		stack<int> s;
		for(int i=n-1;i>=0;i--){
			while((i >= 0) && (a[i] != b[i])){
				s.push(a[i]);
				i--;
			}
			if(i >= 0)
				s.push(a[i]);
			while(s.size() != 0){
				int temp = s.top();
				v.push_back(temp);
				s.pop();
			}
		}
		for(int i=0;i<n;i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}