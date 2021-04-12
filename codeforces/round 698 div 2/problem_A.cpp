#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n] = {0};
		cin>>a[0];
		int max_length = 1,cnt = 1;
		for(int i=1;i<n;i++){
			cin>>a[i];
			if(a[i] == a[i-1])
				cnt++;
			else{
				if(cnt > max_length){
					max_length = cnt;
				}
				cnt = 1;
			}
		}
		if(cnt > max_length)
			max_length = cnt;
		cout<<max_length<<endl;
	}
	return 0;
}