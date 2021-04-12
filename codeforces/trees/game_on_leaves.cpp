#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		if(n == 1){
			cout<<"Ayush"<<endl;
			continue;
		}
		int cnt = 0;
		for(int i=0;i<n-1;i++){
			int a, b;
			cin>>a>>b;
			if(a == x || b == x)
				cnt++;
		}
		if(cnt == 1)
			cout<<"Ayush"<<endl;
		else{
			if(n % 2 == 0)
				cout<<"Ayush"<<endl;
			else if(n % 2 == 1)
				cout<<"Ashish"<<endl;
		}
	}
	return 0;
}