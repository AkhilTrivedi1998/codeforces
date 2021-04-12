#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, cnt = 0;
		string s;
		stack<char> st;
		cin>>n>>s;
		for(int i=0;i<n;i++){
			if(s.at(i) == '(')
				st.push('(');
			else if(s.at(i) == ')'){
				if(st.size() == 0){
					cnt++;
				}
				else{
					st.pop();
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}