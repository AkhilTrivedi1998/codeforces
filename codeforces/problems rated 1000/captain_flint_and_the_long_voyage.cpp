#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		string s = "";
		cin>>n;
		m = n/4 + ((n%4 == 0)? 0 : 1);
		//cout<<m<<endl;
		for(int i=0;i<n;i++){
			if(i < m)
				s = "8" + s;
			else
				s = "9" + s;
		}
		cout<<s<<endl;
	}
	return 0;
}