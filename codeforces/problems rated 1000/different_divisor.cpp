#include<iostream>
#include<vector>
using namespace std;
const int MAX_SIZE = 20012;
vector<bool> prim(MAX_SIZE, true);   
void sieve() 
{
    prim[0] = false;
    prim[1] = false; 
    for (int p = 2; p * p <= MAX_SIZE; p++) { 
        if (prim[p] == true) { 
            for (int i = p * p; i <= MAX_SIZE; i += p) 
                prim[i] = false; 
        } 
    } 
}
int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		int d;
		cin>>d;
		int a,b;
		a = 1 + d;
		while(prim[a] != true)
			a++;
		b = a + d;
		while(prim[b] != true)
			b++;
		cout<<a*b<<endl;
	}
	return 0;
}