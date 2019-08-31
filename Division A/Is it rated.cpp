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
			ll n;
			cin>>n;
			ll left[n];
			ll right[n];
			 ll a,b;
			 ll count=0;
			for(ll i=0;i<n;i++)
			{
					cin>>a>>b;
					left[i]=a;
					right[i]=b;
					if(a!=b)
					count++;
			}
			
			ll count2=0;
		if(count>0)
		cout<<"rated";
		else
		{
			for(ll i=0;i<n-1;i++)
			{
				if(left[i]<left[i+1])
				{
						count2++;
						//cout<<left[i]<<" "<<left[i+1]<<" ";
				}
			
			}
			if(count2>0)
			cout<<"unrated";
			else
			cout<<"maybe";
		}
		//cout<<count2;
	return 0;
}
