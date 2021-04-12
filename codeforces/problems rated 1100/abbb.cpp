#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;
		int i = 0;
		while(i < s.size()){
			if(s.at(i) == 'A')
				st.push('A');
			else if(s.at(i) == 'B'){
				if(st.size() == 0)
					st.push('B');
				else
					st.pop();
			}
			i++;
		}
		cout<<st.size()<<endl;
	}
	return 0;
}