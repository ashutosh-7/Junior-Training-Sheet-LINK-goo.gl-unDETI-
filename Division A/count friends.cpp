#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<ll> parent,men,women,len;
int find(ll n)
{
	if(parent[n]==n)
	return n;
	else
	return parent[n]=find(parent[n]);
}
void add(ll a,ll b)
{
	ll x=find(a);
	ll y=find(b);
	if(x==y)
	return ;
	if(len[x]>len[y])
	{
		parent[y]=x;
		len[x]+=len[y];
	}
	else
	{
			parent[x]=y;
		len[y]+=len[x];
	}
}

int main() {
	
	ll n,m;
	cin>>n>>m;
	parent.resize(n+1);
	men.resize(n+1);
	women.resize(n+1);
	len.resize(n+1);
	for(ll i=1;i<=n;i++)
	{
		parent[i]=i;
		len[i]=1;
	}
	for(ll i=1;i<=m;i++)
	{
		ll temp1,temp2;
		cin>>temp1;
		cin>>temp2;
		add(temp1,temp2);
	}
	for(ll i=1;i<=n;i++)
	{
		cout<<len[find(i)]-1<<" ";
	}
				
	return 0;
}
