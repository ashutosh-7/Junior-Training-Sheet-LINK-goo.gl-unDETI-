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
				string s,inst;
				cin>>s>>inst;
				ll j=0;
				for(ll i=0;i<inst.size();i++)
				{
					if(inst[i]==s[j])
					{
						j++;
						
					}
				}
				cout<<j+1;
	return 0;
}
