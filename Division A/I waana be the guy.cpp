#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
set<int>s;
int main() {
				fast
				ll level;
				cin>>level;
				ll a;
				cin>>a;
				for(ll i=0;i<a;i++)
				{
					ll temp;
					cin>>temp;
					s.insert(temp);
				}
				ll b;
				cin>>b;
				for(ll i=0;i<b;i++)
				{
					ll temp;
					cin>>temp;
					s.insert(temp);
				}
				if(s.size()==level)
				cout<<"I become the guy.";
				else
				cout<<"Oh, my keyboard!";
	return 0;
}
