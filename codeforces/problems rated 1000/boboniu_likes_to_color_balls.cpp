#include<iostream>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll r,g,b,w;
		cin>>r>>g>>b>>w;
		ll s = r + g + b + w;
		int r1 = r % 2;
		int g1 = g % 2;
		int b1 = b % 2;
		int w1 = w % 2;
		if(s % 2 == 0){
			if((r1 == 0) && (g1 == 0) && (b1 == 0) && (w1 == 0))
				cout<<"Yes"<<endl;
			else if((r1 != 0) && (g1 != 0) && (b1 != 0) && (w1 != 0))
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		} 
		else{
			if((r1 == 0) && (g1 != 0) && (b1 != 0) && (w1 != 0)){
				if(r != 0)
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
			}
			else if((r1 != 0) && (g1 == 0) && (b1 != 0) && (w1 != 0)){
				if(g != 0)
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
			}
			else if((r1 != 0) && (g1 != 0) && (b1 == 0) && (w1 != 0)){
				if(b != 0)
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
			}
			else
				cout<<"Yes"<<endl;
		}
	}
	return 0;
}