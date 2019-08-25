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
			ll a,b,c,d;
			cin>>a>>b>>c>>d;
			map<ll,ll> v;
			v[a]++;
			v[b]++;
			v[c]++;
			v[d]++;
			cout<<4-v.size();
	return 0;
}
