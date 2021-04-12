#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int s = (a + b + c);
		if(s % 9 == 0){
			int q = s / 9, f = 0;
			if(a >= q && b >= q && c >= q)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}