#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
//#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<ll>arr,seg;
void rebuildroot(ll root)
{
	seg[root]=min(seg[root*2],seg[root*2+1]);
}
void build(ll l,ll r,ll root=1)
{
	if(l==r)
	{
		seg[root]=arr[l];
		return ;
	}
	ll mid=(l+r)/2;
	build(l,mid,root*2);
	build(mid+1,r,root*2+1);
	rebuildroot(root);
	
}
void update(ll l,ll r,ll x,ll val,ll root=1)
{
	if(l==r)
	{
		seg[root]=val;
		return ;
	}
	ll mid=(l+r)/2;
	if(x<=mid)
	{
		update(l,mid,x,val,root*2);
	}
	else
	{
		update(mid+1,r,x,val,root*2+1);
	}
	rebuildroot(root);
}

ll query(ll l,ll r,ll x,ll y,ll root=1)
{
if(l>=x && y>=r)	
{
	return seg[root];
}
else if(l>y || x>r)
{
	return LLONG_MAX;
}
else
{
ll result=LLONG_MAX;
		
	ll mid=(l+r)/2;
 result=min(result,query(l,mid,x,y,root*2));
	result=min(result,query(mid+1,r,x,y,root*2+1));
	return result;
	}	
	
}



int main() {
				fast
//				ll t;
//				cin>>t;
//				while(t--)
//				{
			
				ll n;
				cin>>n;
				ll q;
				cin>>q;
				arr.resize(n+1);
				seg.resize(4*n);
				for(ll i=1;i<=n;i++)
				cin>>arr[i];
				build(1,n);
			
//				for(ll i=0;i<q;i++)
//				{
//					ll a,b;
//					cin>>a>>b;
//					cout<<query(1,n,a,b)<<endl;
//				}
for(ll i=0;i<q;i++)
{
	char c;
	cin>>c;
	ll a,b;
				cin>>a>>b;
				if(c=='q')
				{
					cout<<query(1,n,a,b)<<"\n";
				}
				if(c=='u')
				{
					update(1,n,a,b);
				}
}
			//}
	return 0;
}
