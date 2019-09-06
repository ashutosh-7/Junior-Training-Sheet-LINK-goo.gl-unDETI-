#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<ll>parent;
vector<pair<ll,ll>>pot;
 
int find(ll n)
{
	if(parent[n]==n)
	return n;
	else
	return parent[n]=find(parent[n]);
}
void add(ll s,ll s1)
{
ll x=find(s);
ll y=find(s1);
	//cout<<x<<"  "<<y<<"      "<<s<<"    "<<s1<<endl;
if(x==y)
{
	//cout<<"adhkj";

	pot.pb(make_pair(s,s1));
	
}
parent[x]=y;
 
}
 
int main() {
				fast
				ll n;
				cin>>n;
			parent.resize(n+1);
		
			for(ll i=1;i<=n;i++)
			{
				parent[i]=i;
			}
			for(ll i=1;i<n;i++)
			{
				ll a,b;
				cin>>a>>b;
				add(a,b);
			}
			set<ll>sot;
		for(ll i=1;i<=n;i++)
		{
			sot.insert(find(i));
		}
		set<ll>::iterator it;
		vector<pair<ll,ll>>sot1;

	
	
		cout<<sot.size()-1<<endl;
	// 	if(sot.size()>1)
	// 	{
	vector<ll>ab;
				for(it=sot.begin();it!=sot.end();it++)
	{
	
		ll temp=*it;
		ab.pb(temp);
		
	}
		
	// 	}
		for(ll i=0;i<pot.size();i++)
		{
			cout<<pot[i].first<<" "<<pot[i].second<<" ";
			cout<<ab[i]<<" "<<ab[i+1]<<" ";
			cout<<endl;
			
			
		}
		
		
		
	return 0;
}
