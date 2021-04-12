#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l = 0, m = 0, r = 0, k = 0, f = 0;
		for(int i=0;i<s.size();i++){
			if(k == 0){
				if(s.at(i) == '('){
					k = 1;
					f = 1;
				}
				else if(s.at(i) == ')'){
					k = 1;
					f = 2;
				}
				else{
					l++;
				}
			}
			else if(k == 1){
				if(s.at(i) == '(' || s.at(i) == ')'){
					k = 2;
				}
				else{
					m++;
				}
			}
			else{
				r++;
			}
		}
		if((l + m + r)%2 == 1)
			cout<<"NO"<<endl;
		else{
			if(f == 1){
				cout<<"YES"<<endl;
			}
			else{
				if(l == 0 || r == 0)
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}