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
			ll arr[1000];
			for(ll i=0;i<1000;i++)
			arr[i]=1;
			arr[0]=0;
			arr[1]=0;
			for(ll i=2;i*i<1000;i++)
			{
				for(ll j=i*i;j<1000;j+=i)
				{
				arr[j]=0;
				}
			}
			ll a,b;
			cin>>a>>b;
			map<ll,ll>mp;
			ll j=1;
//			for(ll i=0;i<1000;i++)
//			cout<<arr[i]<<endl;
			for(ll i=0;i<1000;i++)
			{
				if(arr[i]==1)
			{
				mp[i]=j++;
			}
		}
		//cout<<mp[a]<<" "<<mp[b];
		if(mp[a]==mp[b]-1)
		cout<<"YES";
		else
		cout<<"NO";
			
			
	return 0;
}
