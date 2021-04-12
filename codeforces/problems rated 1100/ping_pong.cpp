// #include<iostream>
// #include<vector>
// using namespace std;
// pair<int,int> solve(int x,int y){
// 	int d = max(x+1,y+1);
// 	vector<vector<vector<pair<int,int>>>> v(d,vector<vector<pair<int,int>>>(d,vector<pair<int,int>>(2,make_pair(0, 0))));
// 	for(int i=0;i<d;i++){
// 		v[0][i][0] = make_pair(0,i);
// 		v[0][i][1] = make_pair(0,i);
// 		v[i][0][0] = make_pair(i,0);
// 		v[i][0][1] = make_pair(i,0);
// 	}
// 	for(int i=1;i<d;i++){
// 		for(int j=1;j<d;j++){
// 			//v[i][j][0]
// 			pair<int, int> t1  = make_pair(0,0), t2 = make_pair(0,0);
// 			t1 = v[i-1][j][1];
// 			t2 = make_pair(1 + v[i-1][j][0].first, v[i-1][j][0].second);
// 			if(t1.second > t2.second){
// 				v[i][j][0] = t1;
// 			}
// 			else if(t1.second == t2.second){
// 				if(t1.first < t2.first){
// 					v[i][j][0] = t1;
// 				}
// 				else{
// 					v[i][j][1] = t2;
// 				}
// 			}
// 			else{
// 				v[i][j][0] = t2;
// 			}
// 			t1 = v[i][j-1][0];
// 			t2 = make_pair(v[i][j-1][1].first ,1+v[i][j-1][1].second);
// 			if(t1.first > t2.first){
// 				v[i][j][1] = t1;
// 			}
// 			else if(t1.first == t2.first){
// 				if(t1.second < t2.second)
// 					v[i][j][1] = t1;
// 				else
// 					v[i][j][1] = t2;
// 			}
// 			else{
// 				v[i][j][1] = t2;
// 			}
// 		}
// 	}
// 	return v[x][y][0];
// }
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int x,y;
// 		cin>>x>>y;
// 		pair<int,int> res = solve(x,y);
// 		cout<<res.first<<" "<<res.second<<endl;
// 	}
// 	return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<(x-1)<<" "<<y<<endl;
    }
    return 0;
}