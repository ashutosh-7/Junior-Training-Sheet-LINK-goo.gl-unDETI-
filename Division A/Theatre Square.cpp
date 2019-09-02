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
			long double a,b,c;
			cin>>a>>b>>c;
			ll temp=ceil(a/c)*ceil(b/c);
			cout<<temp;
	return 0;
}
