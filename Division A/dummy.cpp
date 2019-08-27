#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<ll>cur,cap,parent;
int find(ll n)
{
	if(parent[n]==n)
	return n;
	else
	return parent[n]=find(parent[n]);
}
void add(ll s, ll x)
{
	ll i=find(s);
	while(x)
	{
		ll space=cap[i]-cur[i];
		if(space<=x)
		{
			x-=space;
			cur[i]=cap[i];
			parent[i]=find(s+1);
		}
		else
		{
			x=0;
			cur[i]=cap[i];
			
		}
		i=find(i);
	}
}

int main() {
				fast
				
				ll n,temp;
				cin>>n;
				parent.resize(n+2);
				cur.resize(n+2);
				cap.resize(n+2);
				parent[n+1]=n+1;
				cap[n+1]=LLONG_MAX;
				cur[n+1]=0;
				
				for(ll i=1;i<=n;i++)
				{
					cin>>temp;
					cur[i]=0;
					cap[i]=temp;
					parent[i]=i;
					
				}
				ll p;
				cin>>p;
				ll x,a,b,y;
				while(p--)
				{
					cin>>x;
					if(x==1)
					{
						cin>>a>>b;
						add(a,b);
						
					}
					if(x==2)
					{
						cin>>y;
						cout<<cur[y]<<endl;
					}
				}

	return 0;
}
