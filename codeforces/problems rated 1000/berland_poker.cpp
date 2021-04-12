#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m, k;
		cin>>n>>m>>k;
		int pl = n/k;
		if(pl >= m)
			cout<<m<<endl;
		else{
			int extra_jokers = m - pl, losers = k - 1;
			//cout<<extra_jokers<<" "<<losers<<endl;
			int max_cards = (extra_jokers / losers) + ((extra_jokers % losers == 0) ? 0 : 1);
			cout<<(pl - max_cards)<<endl;
		}
	}
	return 0;
}