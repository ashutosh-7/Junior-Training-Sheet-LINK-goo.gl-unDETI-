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
				ll n,k;
				cin>>n>>k;
				string s="abcdefghijklmnopqrstuvwxyz";
				for(ll i=0;i<n;i++)
				{
					ll temp=i%k;
					cout<<s[temp];
				}
	return 0;
}
