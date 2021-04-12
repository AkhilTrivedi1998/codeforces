#include<iostream>
#define ll long long
using namespace std;
int main(){
		int t;
		cin>>t;
		while(t--){
		ll a,b,c,s1,s2;
		cin>>a>>b>>c;
		if(a < c){
			s1 = 1;
			if((b*a) <= c)
				s2 = -1;
			else
				s2 = b;
		}
		else{
			s1 = -1;
			s2 = b;
		}
		cout<<s1<<" "<<s2<<endl;
	}
	return 0;
}