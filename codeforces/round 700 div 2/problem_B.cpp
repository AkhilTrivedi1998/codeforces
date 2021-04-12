#include<iostream>
#include<cmath>
using namespace std;
int survive(int A, int &H, int a, int h){
	int rnd1 = ceil((double)h/A), rnd2 = ceil((double)H/a);
	if(rnd1 <= rnd2){
		H = H - rnd1*a;
		return 1; 
	}
	else{
		return 0;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int A,H,n;
		cin>>A>>H>>n;
		int a[n] = {0}, h[n] = {0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>h[i];
		int vic = 0;
		for(int i=0;i<n;i++){
			vic = survive(A,H,a[i],h[i]);
			if(vic == 0)
				break;
		}
		if(vic == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}