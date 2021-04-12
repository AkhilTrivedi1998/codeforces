#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k;
		cin>>n>>k;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(k % 2 == 0){
			int temp = k / 2;
			int turn = 0;
			for(int i=0;i<n;i++){
				if(a[i] < temp)
					b[i] = 0;
				else if(a[i] == temp){
					b[i] = turn;
					turn = (turn + 1) % 2;
				}
				else
					b[i] = 1;
			}
		}
		else{
			int temp = k / 2;
			for(int i=0;i<n;i++){
				if(a[i] <= temp)
					b[i] = 0;
				else
					b[i] = 1;
			}
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}