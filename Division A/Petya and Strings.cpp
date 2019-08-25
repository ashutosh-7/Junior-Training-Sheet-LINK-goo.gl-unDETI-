#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
			string s1,s2;
			cin>>s1>>s2;
			transform(s1.begin(),s1.end(),s1.begin(),::tolower);
				transform(s2.begin(),s2.end(),s2.begin(),::tolower);
			//cout<<s1<<" jkgjbj"<<s2<<endl;
			if(s1>s2)
			cout<<"1"<<endl;
				if(s1<s2)
			cout<<"-1"<<endl;
				if(s1==s2)
			cout<<"0"<<endl;
	return 0;
}
