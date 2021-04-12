#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n] = {0}, sum_a[n] = {0}, maximum_a = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i == 0){
				sum_a[i] = a[i];
				if(sum_a[i] > maximum_a)
					maximum_a = sum_a[i];
			}
			else{
				sum_a[i] = a[i] + sum_a[i-1];
				if(sum_a[i] > maximum_a)
					maximum_a = sum_a[i];
			}
		}
		int m;
		cin>>m;
		int b[m] = {0}, sum_b[m] = {0}, maximum_b = 0;
		for(int i=0;i<m;i++){
			cin>>b[i];
			if(i == 0){
				sum_b[i] = b[i];
				if(sum_b[i] > maximum_b)
					maximum_b = sum_b[i];
			}
			else{
				sum_b[i] = b[i] + sum_b[i-1];
				if(sum_b[i] > maximum_b)
					maximum_b = sum_b[i];
			}
		}
		cout<<maximum_a + maximum_b<<endl;
	}
	return 0;
}