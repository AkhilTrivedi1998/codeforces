#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(b > a){
			cout<<1<<endl;
		}
		else if(a == b && b != 1)
			cout<<2<<endl;
		else{
			int i = 0, minimum = 35;
			while(i <= 32){
				int cnt = i, temp = a, j = b + i;
				if(j == 1){
					cnt++;
					i++;
					j = b + i;
				}
				while(temp != 0){
					temp = temp / j;
					cnt++;
				}
				i++;
				if(cnt < minimum)
					minimum = cnt;
			}
			cout<<minimum<<endl;
		}
	}
	return 0;
}