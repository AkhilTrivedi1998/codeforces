#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		int u = 0,d = 0,r = 0,l = 0;
		for(int i=0;i<s.size();i++){
			switch(s.at(i)){
				case 'U': u += 1;
				          break;
				case 'D': d += 1;
				          break;
				case 'R': r += 1;
				          break;
				case 'L': l += 1;
				          break;          
			}
		}
		int k = 0;
		if(x >= 0 && y >= 0){
			if(r >= abs(x) && u >= abs(y)){
				cout<<"YES"<<endl;
				k = 1;
			}
		}
		else if(x <= 0 && y >= 0){
			if(l >= abs(x) && u >= abs(y)){
				cout<<"YES"<<endl;
				k = 1;
			}
		}
		else if(x >= 0 && y <= 0){
			if(r >= abs(x) && d >= abs(y)){
				cout<<"YES"<<endl;
				k = 1;
			}
		}
		else if(x <= 0 && y <= 0){
			if(l >= abs(x) && d >= abs(y)){
				cout<<"YES"<<endl;
				k = 1;
			}
		}
		if(k == 0)
			cout<<"NO"<<endl;
	}
	return 0;
}