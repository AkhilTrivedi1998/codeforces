#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
unordered_map<int,string> mp;

int main(){
	mp[0] = "00";
	mp[1] = "10";
	mp[2] = "20";
	mp[3] = "30";
	mp[4] = "40";
	mp[5] = "50";
	mp[6] = "60";
	mp[7] = "70";
	mp[8] = "80";
	mp[9] = "90";
	mp[10] = "01";
	mp[11] = "11";
	mp[12] = "21";
	mp[13] = "31";
	mp[14] = "41";
	mp[15] = "51";
	mp[16] = "61";
	mp[17] = "71";
	mp[18] = "81";
	mp[19] = "91";
	mp[20] = "02";
	mp[21] = "12";
	mp[22] = "22";
	mp[23] = "32";
	string s,s1;
	cin>>s;
	int i = stoi(s.substr(0,2));
	int j = stoi(s.substr(3,2));
	int k = stoi(mp[i]);
	//cout<<i<<"  -  "<<j<<"  -  "<<k<<endl;
	if(i >= 6 && i <= 9){
		//cout<<1<<endl;
		s1 = "10:01";
	}
	else if(i == 23){
		//cout<<2<<endl;
		if(j < k)
			s1 = "23:32";
		else
			s1 = "00:00";
	}
	else if(i >= 0 && i <= 4){
		//cout<<3<<endl;
		if(j < k)
			s1 = "0" + to_string(i) + ":" + mp[i];
		else
			s1 = "0" + to_string(i+1) + ":" + mp[i+1];
	}
	else if(i == 15){
		//cout<<4<<endl;
		if(j < k)
			s1 = to_string(i) + ":" + mp[i];
		else
			s1 = "20:02";
	}
	else if(i >= 16 && i <= 19){
		//cout<<3<<endl;
		s1 = "20:02";
	}
	else if(i == 5){
		//cout<<4<<endl;
		if(j < k)
			s1 = "0" + to_string(i) + ":" + mp[i];
		else
			s1 = "10:01";
	}
	else{
		//cout<<5<<endl;
		if(j < k)
			s1 = to_string(i) + ":" + mp[i];
		else
			s1 = to_string(i+1) + ":" + mp[i+1];
	}
	// int x = stoi("01");
	// if(x == 1)
	// 	cout<<1<<endl;
	// else
	// 	cout<<2<<endl;
	cout<<s1<<endl;
	return 0;
}

