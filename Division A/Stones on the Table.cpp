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
				char s,temp,prev;
					cin>>s;
					prev=s;
					ll count=0;
				for(ll i=0;i<n-1;i++)
				{
					cin>>s;
					temp=s;
					if(prev==temp)
					count++;
					prev=temp;
					
				
				}
				cout<<count;
	return 0;
}
