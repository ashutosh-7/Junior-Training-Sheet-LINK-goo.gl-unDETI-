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
				ll arr[n];
				ll tc=0;ll temp;
				for(ll i=0;i<n;i++)
				{
				cin>>temp;
				arr[i]=temp;
				if(temp==-1)
				tc++;
			}
				ll cp=0;
				ll crime=0;
				for(ll i=0;i<n;i++)
				{
					if(arr[i]>0)
					cp+=arr[i];
					if(arr[i]==-1 && cp>0)
					{
					
					crime++;
					cp--;
				}
				
				//cout<<crime<<"  "<<cp<<endl;
				}
			cout<<tc-crime<<endl;
	return 0;
}
