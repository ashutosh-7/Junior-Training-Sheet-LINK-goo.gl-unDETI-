#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
			string s,s3;
			cin>>s>>s3;
			string s2=s3;
		reverse(s.begin(),s.end());
		if(s==s2)
		cout<<"YES";
		else
		cout<<"NO";
		//cout<<s<<" "<<s2;
	return 0;
}
